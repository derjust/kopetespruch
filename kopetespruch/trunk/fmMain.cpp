#include "fmMain.h"

TfmMain::TfmMain(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	
	settings = new QSettings("zeemanSOFT", "kopeteSpruch");

	connect( ui.leContainsWord, SIGNAL(returnPressed()), this, SLOT(on_pbNeuerSpruch_clicked()));

	on_pbNeuerSpruch_clicked();
	ui.leContainsWord->setFocus();
}

void TfmMain::on_pbSet_clicked( bool checked ) {
	QString awayText;
	if (!ui.txtText->toPlainText().isEmpty()) {
		awayText = ui.txtText->toPlainText() + "\n--\n";
	}
	awayText.append( ui.txtSpruch->toPlainText() );
	process.start("dcop kopete KopeteIface setAway \"" + awayText + "\"");
}

void TfmMain::on_pbClose_clicked( bool checked ) {
	on_pbSet_clicked();
	process.waitForFinished();
	this->close();
}

void TfmMain::on_pbNeuerSpruch_clicked( bool checked ) {
	QString containsWord = ui.leContainsWord->text().trimmed();
	QString queryString;
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("wodan");
	db.setDatabaseName("sprueche");
	db.setUserName("stufe");
	db.setPassword("lfsm");
	if( db.open() ) {
		QSqlQuery query(db);
		if (containsWord.isEmpty()) {
        		queryString = "SELECT Spruch, Autor FROM sprueche ORDER BY RAND() LIMIT 1";
		}
		else {
			queryString = "SELECT Spruch, Autor FROM sprueche WHERE Spruch LIKE \"%" +
					containsWord + "%\" ORDER BY RAND() LIMIT 1";
		}
		query.exec(queryString);
		if (query.next()) {
			ui.txtSpruch->setPlainText(query.value(0).toString() + "\n[" + query.value(1).toString() + "]");
        	}
		else {
			ui.txtSpruch->setPlainText("Keine Daten von der Datenbank erhalten");
		}
	}
	else {
		ui.txtSpruch->setPlainText("Keine Verbindung zur Datenbank");
	}
	QSqlDatabase::removeDatabase("QMYSQL");
}

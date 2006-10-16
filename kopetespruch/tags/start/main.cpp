#include <QApplication>

#include "fmMain.h"

int main(int argc, char *argv[])
{
	QApplication kopeteSpruch(argc, argv);
	
	TfmMain fmMain;
	fmMain.setFixedSize(fmMain.size());
	fmMain.show();
	return kopeteSpruch.exec();
}

#ifndef __FMMAIN_H__
#define __FMMAIN_H__

#include <QtGui>
#include <QSettings>
#include <QProcess>
#include <QMainWindow>
#include <QtSql>

#include "ui_fmMain.h"

class TfmMain : public QMainWindow
{
Q_OBJECT
   public:
	TfmMain(QWidget *parent = 0);
   private slots:
	void on_pbSet_clicked( bool checked = false );
	void on_pbClose_clicked( bool checked = false );
	void on_pbNeuerSpruch_clicked( bool checked = false );
	
   private:
   	QSettings* settings;
	QProcess process;
	Ui::fmMain ui;
};

#endif

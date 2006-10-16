/********************************************************************************
** Form generated from reading ui file 'fmMain.ui'
**
** Created: Sun Oct 8 10:51:43 2006
**      by: Qt User Interface Compiler version 4.2.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FMMAIN_H
#define UI_FMMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_fmMain
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *pbSet;
    QSpacerItem *spacerItem;
    QPushButton *pbClose;
    QWidget *layoutWidget1;
    QHBoxLayout *hboxLayout1;
    QTextEdit *txtText;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget2;
    QHBoxLayout *hboxLayout2;
    QTextEdit *txtSpruch;
    QVBoxLayout *vboxLayout;
    QLineEdit *leContainsWord;
    QSpacerItem *spacerItem1;
    QPushButton *pbNeuerSpruch;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *fmMain)
    {
    fmMain->setObjectName(QString::fromUtf8("fmMain"));
    layoutWidget = new QWidget(fmMain);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(0, 280, 409, 29));
    hboxLayout = new QHBoxLayout(layoutWidget);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    pbSet = new QPushButton(layoutWidget);
    pbSet->setObjectName(QString::fromUtf8("pbSet"));

    hboxLayout->addWidget(pbSet);

    spacerItem = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    pbClose = new QPushButton(layoutWidget);
    pbClose->setObjectName(QString::fromUtf8("pbClose"));

    hboxLayout->addWidget(pbClose);

    layoutWidget1 = new QWidget(fmMain);
    layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
    layoutWidget1->setGeometry(QRect(1, 1, 409, 124));
    hboxLayout1 = new QHBoxLayout(layoutWidget1);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    txtText = new QTextEdit(layoutWidget1);
    txtText->setObjectName(QString::fromUtf8("txtText"));

    hboxLayout1->addWidget(txtText);

    line = new QFrame(fmMain);
    line->setObjectName(QString::fromUtf8("line"));
    line->setGeometry(QRect(0, 120, 409, 16));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    line_2 = new QFrame(fmMain);
    line_2->setObjectName(QString::fromUtf8("line_2"));
    line_2->setGeometry(QRect(0, 270, 409, 16));
    line_2->setFrameShape(QFrame::HLine);
    line_2->setFrameShadow(QFrame::Sunken);
    layoutWidget2 = new QWidget(fmMain);
    layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
    layoutWidget2->setGeometry(QRect(0, 130, 411, 141));
    hboxLayout2 = new QHBoxLayout(layoutWidget2);
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    txtSpruch = new QTextEdit(layoutWidget2);
    txtSpruch->setObjectName(QString::fromUtf8("txtSpruch"));

    hboxLayout2->addWidget(txtSpruch);

    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    leContainsWord = new QLineEdit(layoutWidget2);
    leContainsWord->setObjectName(QString::fromUtf8("leContainsWord"));

    vboxLayout->addWidget(leContainsWord);

    spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem1);

    pbNeuerSpruch = new QPushButton(layoutWidget2);
    pbNeuerSpruch->setObjectName(QString::fromUtf8("pbNeuerSpruch"));

    vboxLayout->addWidget(pbNeuerSpruch);

    spacerItem2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem2);

    spacerItem3 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem3);


    hboxLayout2->addLayout(vboxLayout);


    retranslateUi(fmMain);

    QSize size(412, 311);
    size = size.expandedTo(fmMain->minimumSizeHint());
    fmMain->resize(size);


    QMetaObject::connectSlotsByName(fmMain);
    } // setupUi

    void retranslateUi(QWidget *fmMain)
    {
    fmMain->setWindowTitle(QApplication::translate("fmMain", "kopeteSpruch", 0, QApplication::UnicodeUTF8));
    pbSet->setText(QApplication::translate("fmMain", "Setzen", 0, QApplication::UnicodeUTF8));
    pbClose->setText(QApplication::translate("fmMain", "Setzen  && Been&den", 0, QApplication::UnicodeUTF8));
    pbNeuerSpruch->setText(QApplication::translate("fmMain", "Neuer &Spruch", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(fmMain);
    } // retranslateUi

};

namespace Ui {
    class fmMain: public Ui_fmMain {};
} // namespace Ui

#endif // UI_FMMAIN_H

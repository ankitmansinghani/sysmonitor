/********************************************************************************
** Form generated from reading UI file 'demoapp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOAPP_H
#define UI_DEMOAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demoapp
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demoapp)
    {
        if (demoapp->objectName().isEmpty())
            demoapp->setObjectName(QStringLiteral("demoapp"));
        demoapp->resize(928, 466);
        centralWidget = new QWidget(demoapp);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 70, 80, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 100, 80, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 40, 80, 23));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(105, 0, 961, 301));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 80, 23));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 190, 101, 23));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 160, 101, 23));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 130, 80, 23));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 220, 101, 23));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(-1, 250, 101, 23));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 280, 80, 23));
        demoapp->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(demoapp);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        demoapp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(demoapp);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        demoapp->setStatusBar(statusBar);

        retranslateUi(demoapp);

        QMetaObject::connectSlotsByName(demoapp);
    } // setupUi

    void retranslateUi(QMainWindow *demoapp)
    {
        demoapp->setWindowTitle(QApplication::translate("demoapp", "demoapp", 0));
        pushButton_3->setText(QApplication::translate("demoapp", "WIFI-LOG", 0));
        pushButton_4->setText(QApplication::translate("demoapp", "LID-LOG", 0));
        pushButton_2->setText(QApplication::translate("demoapp", "USB-LOG", 0));
        pushButton->setText(QApplication::translate("demoapp", "SUDO-LOG", 0));
        pushButton_5->setText(QApplication::translate("demoapp", "BLUTOOTH-LOG", 0));
        pushButton_6->setText(QApplication::translate("demoapp", "SYS_DOWN-LOG", 0));
        pushButton_7->setText(QApplication::translate("demoapp", "SYS_UP-LOG", 0));
        pushButton_8->setText(QApplication::translate("demoapp", "EATHERNET-LOG", 0));
        pushButton_9->setText(QApplication::translate("demoapp", "APACHE2-LOG", 0));
        pushButton_10->setText(QApplication::translate("demoapp", "RFRESH", 0));
    } // retranslateUi

};

namespace Ui {
    class demoapp: public Ui_demoapp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOAPP_H

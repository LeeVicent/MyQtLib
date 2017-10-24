/********************************************************************************
** Form generated from reading UI file 'myqtlib.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQTLIB_H
#define UI_MYQTLIB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyQtLibClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyQtLibClass)
    {
        if (MyQtLibClass->objectName().isEmpty())
            MyQtLibClass->setObjectName(QStringLiteral("MyQtLibClass"));
        MyQtLibClass->resize(600, 400);
        menuBar = new QMenuBar(MyQtLibClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MyQtLibClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyQtLibClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyQtLibClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyQtLibClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MyQtLibClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyQtLibClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyQtLibClass->setStatusBar(statusBar);

        retranslateUi(MyQtLibClass);

        QMetaObject::connectSlotsByName(MyQtLibClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyQtLibClass)
    {
        MyQtLibClass->setWindowTitle(QApplication::translate("MyQtLibClass", "MyQtLib", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyQtLibClass: public Ui_MyQtLibClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQTLIB_H

#ifndef MYQTLIB_H
#define MYQTLIB_H

#include <QtWidgets/QMainWindow>
#include "ui_myqtlib.h"

class MyQtLib : public QMainWindow
{
	Q_OBJECT

public:
	MyQtLib(QWidget *parent = 0);
	~MyQtLib();

private:
	Ui::MyQtLibClass ui;
};

#endif // MYQTLIB_H

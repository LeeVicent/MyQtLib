#include "myqtlib.h"
#include <QApplication>
#include "gui\dialog\find_dialog.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FindDialog f;
	f.show();
	return a.exec();
}

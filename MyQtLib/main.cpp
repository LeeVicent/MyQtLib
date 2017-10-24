#include "myqtlib.h"
#include <QApplication>
#include "gui\dialog\find_dialog.h"
#include <QColorDialog>
#include <QErrorMessage>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	/*FindDialog f;
	f.show();*/
	//QColorDialog q;
	//QErrorMessage q;
	//QFileDialog q;
	//QFontDialog q;
	QInputDialog q;
	q.show(); q.show();
	return a.exec();
}

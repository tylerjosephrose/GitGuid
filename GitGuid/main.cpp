#include "GitGuid.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GitGuid w;
	w.show();
	return a.exec();
}

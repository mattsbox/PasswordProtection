#include <QApplication>
#include "gui/mainWindow.h"
int main(int argc,char **argv)
{
	QApplication app(argc,argv);
	MainWindow* window=new MainWindow();
	window->show();
	app.exec();	
	return 0;
}

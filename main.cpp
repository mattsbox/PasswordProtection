#include <QApplication>
#include "gui/mainWindow.h"
#include "databases.h"
int main(int argc,char **argv)
{
	if(initdb())
	{
		QApplication app(argc,argv);
		MainWindow* window=new MainWindow();
		window->show();
		app.exec();	
	}
	return 0;
}

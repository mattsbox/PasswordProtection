#ifndef MAINWINDOW
#define MAINWINDOW
#include <QMainWindow>
#include "ui_mainWindow.h"
#include "setPasswordDialog.h"
namespace Ui
{
	class MainWindow;
};
class MainWindow:public QMainWindow
{
	Q_OBJECT
	public:
		MainWindow();
		~MainWindow();
	private:
		Ui::MainWindow *ui;
		const SetPasswordDialog *setPasswordDialog;
		void setNewLocalPasswords();
	private slots:
		void on_retrieveButton_clicked();
		void on_usernameButton_clicked();
		void on_serviceButton_clicked();
		void on_actionQuit_triggered();
		//void on_actionSet_Passwords_triggered();
};
#endif

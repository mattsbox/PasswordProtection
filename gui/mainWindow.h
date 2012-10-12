#ifndef MAINWINDOW
#define MAINWINDOW
#include <string>
using std::string;
#include <QMainWindow>
#include "ui_mainWindow.h"
#include "setPasswordDialog.h"
#include "newPasswordDialog.h"
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
		void print(string);
	private:
		Ui::MainWindow *ui;
		const SetPasswordDialog *setPasswordDialog;
		NewPasswordDialog *newPasswordDialog;
		void setNewLocalPasswords();
		void prepare_fields();
		void prepare_usernames(string);
	private slots:
		void on_retrieveButton_clicked();
		void on_usernameButton_clicked();
		void on_serviceButton_clicked();
		void on_actionQuit_triggered();
		void on_retrieveServiceComboBox_activated(int);
		//void on_actionSet_Passwords_triggered();
};
#endif

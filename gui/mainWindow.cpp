#include<iostream>
using std::cout;
using std::endl;
#include "mainWindow.h"
MainWindow::MainWindow()
	:QMainWindow(),ui(new Ui::MainWindow),setPasswordDialog(new SetPasswordDialog)
{
	ui->setupUi(this);
	connect(ui->actionSet_Passwords,SIGNAL(triggered()),setPasswordDialog,SLOT(open()));	
}
/*
*RETRIEVE PASSWORD BUTTON: Retrieve a username and password from an existing service
*/
void MainWindow::on_retrieveButton_clicked()
{
	//cout<<ui->firstPasswordLineEdit->text().toAscii().data()<<endl;
	cout<<"RETRIEVE"<<endl;
	//char* first=ui->firstPasswordLineEdit->text();
}
/*
*NEW USERNAME BUTTON: Add a new username and password to an old service
*/
void MainWindow::on_usernameButton_clicked()
{
	cout<<"USERNAME"<<endl;
}
/*
*NEW SERVICE BUTTON: Add a new service with a username and password
*/
void MainWindow::on_serviceButton_clicked()
{
	cout<<"SERVICE"<<endl;
}
/*
*FILE MENU QUIT BUTTON: Exit the program
*/
void MainWindow::on_actionQuit_triggered()
{
	cout<<"TRIGGER"<<endl;
}
/*
*MANAGE MENU SET PASSWORDS BUTTON: Set the local passwords
*/
/*void MainWindow::on_actionSet_Passwords_triggered()
{
	setNewLocalPasswords();
}
void MainWindow::setNewLocalPasswords()
{
	//setPasswordDialog->open();
}*/
MainWindow::~MainWindow()
{
	delete ui;
}

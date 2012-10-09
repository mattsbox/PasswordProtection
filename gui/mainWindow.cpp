#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include<map>
using std::map;
#include<QString>
#include<QVariant>
#include "mainWindow.h"
#include "databases.h"
MainWindow::MainWindow()
	:QMainWindow(),ui(new Ui::MainWindow),setPasswordDialog(new SetPasswordDialog)
{
	ui->setupUi(this);
	connect(ui->actionSet_Passwords,SIGNAL(triggered()),setPasswordDialog,SLOT(open()));
	map<string,string>s=get_services();
	map<string,string>::iterator i;
	for(i=s.begin();i!=s.end();i++)
	{
		ui->retrieveServiceComboBox->insertItem(0,QString((i->second).data()),QVariant((i->first).data()));
	}
	map<string,string>a=get_accounts(s.begin()->first);
	for(i=a.begin();i!=a.end();i++)
	{
		ui->retrieveUsernameComboBox->insertItem(0,QString((i->second).data()),QVariant((i->first).data()));
	}
}
/*
*RETRIEVE PASSWORD BUTTON: Retrieve a username and password from an existing service
*/
void MainWindow::on_retrieveButton_clicked()
{
	QComboBox *c=ui->retrieveUsernameComboBox;
	cout<<get_password(string(c->itemData(c->currentIndex()).toString().toAscii().data()),ui->firstPasswordLineEdit->text(),ui->secondPasswordLineEdit->text())<<endl;
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
	QString service=ui->serviceServiceLineEdit->text();
	QString username=ui->serviceUsernameLineEdit->text();
	QString password=ui->servicePasswordLineEdit->text();
	if(service.compare("")&&username.compare("")&&password.compare(""))
	{
		add_service(string(service.toAscii().data()),string(username.toAscii().data()),string(password.toAscii().data()),ui->firstPasswordLineEdit->text(),ui->secondPasswordLineEdit->text());
	}
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

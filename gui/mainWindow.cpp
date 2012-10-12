#include<iostream>
using std::cout;
using std::endl;
#include<map>
using std::map;
#include<stdio.h>
#include<QString>
#include<QVariant>
#include<QTimer>
#include "mainWindow.h"
#include "databases.h"
MainWindow::MainWindow()
	:QMainWindow(),ui(new Ui::MainWindow),setPasswordDialog(new SetPasswordDialog()),newPasswordDialog(new NewPasswordDialog())
{
	ui->setupUi(this);
	//SetPasswordDialog setPasswordDialog=new SetPasswordDialog(this);
	connect(ui->actionSet_Passwords,SIGNAL(triggered()),setPasswordDialog,SLOT(open()));
	if(initdb(this))
	{
		prepare_fields();
	}
	if(!fopen("pass","r"))
	{
		QTimer::singleShot(0,newPasswordDialog,SLOT(open()));
	}
}
void MainWindow::prepare_fields()
{
	ui->retrieveServiceComboBox->clear();
	ui->usernameServiceComboBox->clear();
	map<string,string>* s=get_services();
	if(!s->empty())
	{
		map<string,string>::iterator i;
		for(i=s->begin();i!=s->end();i++)
		{
			ui->retrieveServiceComboBox->insertItem(0,QString((i->second).data()),QVariant((i->first).data()));
			ui->usernameServiceComboBox->insertItem(0,QString((i->second).data()),QVariant((i->first).data()));
		}
		prepare_usernames(s->begin()->first);
	}
}
void MainWindow::prepare_usernames(string sid)
{
	ui->retrieveUsernameComboBox->clear();
	map<string,string>* a=get_accounts(sid);
	if(!a->empty())
	{
		map<string,string>::iterator i;
		for(i=a->begin();i!=a->end();i++)
		{
			ui->retrieveUsernameComboBox->insertItem(0,QString((i->second).data()),QVariant((i->first).data()));
		}
	}
}
void MainWindow::on_retrieveServiceComboBox_activated(int x)
{
	prepare_usernames(string(ui->retrieveServiceComboBox->itemData(x).toString().toAscii().data()));
}
/*
*RETRIEVE PASSWORD BUTTON: Retrieve a username and password from an existing service
*/
void MainWindow::on_retrieveButton_clicked()
{
	QComboBox *c=ui->retrieveUsernameComboBox;
	print("Password: "+get_password(string(c->itemData(c->currentIndex()).toString().toAscii().data()),ui->firstPasswordLineEdit->text(),ui->secondPasswordLineEdit->text(),this));
}
void MainWindow::print(string s)
{
	ui->textBrowser->setText(QString(s.data()));
}
/*
*NEW USERNAME BUTTON: Add a new username and password to an old service
*/
void MainWindow::on_usernameButton_clicked()
{
	QString service=ui->usernameServiceComboBox->currentText();
	QString username=ui->usernameUsernameLineEdit->text();
	QString password=ui->usernamePasswordLineEdit->text();
	if(service.compare("")&&username.compare("")&&password.compare(""))
	{
		if(add_service(string(service.toAscii().data()),string(username.toAscii().data()),string(password.toAscii().data()),ui->firstPasswordLineEdit->text(),ui->secondPasswordLineEdit->text(),this))
		{
			prepare_fields();
		}
	}
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
		if(add_service(string(service.toAscii().data()),string(username.toAscii().data()),string(password.toAscii().data()),ui->firstPasswordLineEdit->text(),ui->secondPasswordLineEdit->text(),this))
		{
			prepare_fields();
		}
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

#include<iostream>
using std::cout;
using std::endl;
#include<stdio.h>
#include"../encryption.h"
#include"setPasswordDialog.h"
SetPasswordDialog::SetPasswordDialog()
	:QDialog(),ui(new Ui::SetPasswordDialog)
{
	ui->setupUi(this);
}
SetPasswordDialog::~SetPasswordDialog()
{

}
void SetPasswordDialog::accept()
{
	FILE *pass=fopen("pass","r");
	QString op1=ui->oldFirstPasswordLineEdit->text();
	QString op2=ui->oldSecondPasswordLineEdit->text();
	QString np1=ui->newFirstPasswordLineEdit->text();
	QString np2=ui->newSecondPasswordLineEdit->text();
	string final=scramble(op1,op2);	
	char filein[21];
	if(fgets(filein,21,pass)!=NULL)
	{
		if(global_passwords_correct(op1,op2))
		{
			cout<<"CORRECT PASSWORDS"<<endl;
			if(fclose(pass)==0)
			{
				pass=fopen("pass","w");
				if(pass!=NULL)
				{
					fprintf(pass,"%s",scramble(np1,np2).c_str());
					cout<<"PASSWORDS SUCCESSFULLY WRITTEN"<<endl;
					fclose(pass);
				}
				else
				{
					cout<<"UNABLE TO OPEN PASSWORD FILE FOR WRITING"<<endl;
				}
			}
			else
			{
				cout<<"UNABLE TO CLOSE FILE"<<endl;	
			}
		}
		else
		{
			cout<<"INCORRECT PASSWORDS"<<endl;
		}
	}
	else
	{
		cout<<"UNABLE TO READ PASSWORD FILE"<<endl;
	}
}

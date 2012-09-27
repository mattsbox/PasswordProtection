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
		if(final.compare(string(filein))==0&&string(filein).compare("")!=0)
		{
			cout<<"CORRECT PASSWORDS"<<endl;
			if(fclose(pass)==0)
			{
				pass=fopen("pass","w");
				if(pass!=NULL)
				{
					fprintf(pass,"%s",scramble(np1,np2).c_str());				
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
			cout<<"INCORRECT PASSWORD"<<endl;
			cout<<"FINAL "<<final<<endl<<"FILEIN "<<filein<<endl;
		}
	}
	else
	{
		cout<<"UNABLE TO READ PASSWORD FILE"<<endl;
	}
}
bool SetPasswordDialog::global_passwords_correct(QString p1,QString p2)
{
	FILE *pass=fopen("pass","r");
	string final=scramble(op1,op2);	
	char filein[21];
	if(fgets(filein,21,pass)!=NULL)
	{
		if(final.compare(string(filein))==0&&string(filein).compare("")!=0)
		{
			cout<<"CORRECT PASSWORDS"<<endl;
			return true;
		}
		else
		{
			cout<<"INCORRECT PASSWORD"<<endl;
			cout<<"FINAL "<<final<<endl<<"FILEIN "<<filein<<endl;
		}
	}
	else
	{
		cout<<"UNABLE TO READ PASSWORD FILE"<<endl;
	}
	return false;
}
string SetPasswordDialog::scramble(QString s1,QString s2)
{
	const char* hash1=applySHA1(string(s1.toAscii().data())).data();
	const char* hash2=applySHA1(string(s2.toAscii().data())).data();
	char x[21];
	int z;
	string final;
	for(z=0;z<20;z++)
	{
		x[z]=(hash1[z]|hash2[z]);
	}
	x[20]='\0';
	return applySHA1(string(x));
}

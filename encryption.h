#ifndef ENCRYPTION
#define ENCRYPTION
#include<string>
#include<QString>
using std::string;
#include"gui/mainWindow.h"
string scramble(QString,QString);
bool global_passwords_correct(QString,QString,MainWindow*);
string applySHA1(string);
string encryptAES(string,string);
string decryptAES(string,string);
#endif

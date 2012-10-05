#ifndef ENCRYPTION
#define ENCRYPTION
#include<string>
#include<QString>
using std::string;
string scramble(QString,QString);
bool global_passwords_correct(QString,QString);
string applySHA1(string);
string encryptAES(string,string);
string decryptAES(string,string);
#endif

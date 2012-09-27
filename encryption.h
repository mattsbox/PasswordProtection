#ifndef ENCRYPTION
#define ENCRYPTION
#include<string>
using std::string;
string applySHA1(string);
string encryptAES(string,string);
string decryptAES(string,string);
#endif

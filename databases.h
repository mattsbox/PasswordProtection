#ifndef DATABASES
#define DATABASES
#include<map>
using std::map;
#include<string>
using std::string;
#include<QString>
bool add_service(string,string,string,QString,QString);
bool initdb();
map<string,string> get_services();
map<string,string> get_accounts(string);
string get_password(string,QString,QString);
#endif

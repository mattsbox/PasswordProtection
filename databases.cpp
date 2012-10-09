#include<algorithm>
using std::max;
using std::min;
using std::pair;
#include<sqlite3.h>
#include<iostream>
using std::cout;
using std::endl;
#include"encryption.h"
#include"databases.h"
string sid;
static int add_service_callback(void*,int,char** argv,char**)
{
	sid=string(argv[0]);
	return 0;
}
#define KEYSTRING int ma=max(gp1.length(),gp2.length());int mi=min(gp1.length(),gp2.length());char* key=(char*)malloc(ma+1);int i;for(i=0;i<mi;i++){key[i]=(gp1[i].toAscii()^gp2[i].toAscii());}if(gp1.length()==ma){for(i=mi;i<ma;i++){key[i]=(gp1[i].toAscii()^'0');}}else{for(i=mi;i<ma;i++){key[i]=(gp2[i].toAscii()^'0');}}key[ma]='\0';string keystring=string(key,ma+1);free(key);
bool add_service(string service,string username,string password,QString gp1,QString gp2)
{
	if(global_passwords_correct(gp1,gp2))
	{
		sqlite3 *handle;
		if(sqlite3_open("db",&handle)==SQLITE_OK)
		{
			sqlite3_exec(handle,string("INSERT INTO services (service) VALUES (\""+service+"\")").data(),0,0,NULL);
			if(sqlite3_exec(handle,string("SELECT sid FROM services WHERE service=\""+service+"\" LIMIT 1").data(),add_service_callback,0,NULL)==SQLITE_OK)
			{
				KEYSTRING
					cout<<keystring<<endl;
				if(sqlite3_exec(handle,string("INSERT INTO accounts (sid,username,password) VALUES ("+sid+",\'"+username+"\',\'"+encryptAES(password,keystring)+"\')").data(),0,0,NULL)==SQLITE_OK)
				{
					return true;
				}
				cout<<"second query fail "<<sqlite3_errmsg(handle)<<endl;
			}
			else
			{
				cout<<"query failed"<<endl;
			}
			sqlite3_close(handle);
		}
	}
	return false;
}
string password;
static int password_callback(void*,int,char** argv,char**)
{
	password=string(argv[0]);
	return 0;
}
string get_password(string aid,QString gp1,QString gp2)
{
	sqlite3 *handle;
	if((sqlite3_open("db",&handle)==SQLITE_OK)&&(sqlite3_exec(handle,("SELECT password FROM accounts WHERE aid="+aid).data(),password_callback,0,NULL)==SQLITE_OK))
	{
		KEYSTRING
		return decryptAES(password,keystring);
	}
	return "";
}
map<string,string> services;
static int services_callback(void*,int,char** argv,char**)
{
	services.insert(pair<string,string>(string(argv[0]),string(argv[1])));
	return 0;
}
map<string,string> get_services()
{
	sqlite3 *handle;
	if((sqlite3_open("db",&handle)==SQLITE_OK)&&(sqlite3_exec(handle,"SELECT sid, service FROM services",services_callback,0,NULL)==SQLITE_OK))
	{		
		return services;
	}
	return map<string,string>();
}
map<string,string> accounts;
static int accounts_callback(void*,int,char** argv,char**)
{
	accounts.insert(pair<string,string>(string(argv[0]),string(argv[1])));
	return 0;
}
map<string,string> get_accounts(string sid)
{
	sqlite3 *handle;
	if((sqlite3_open("db",&handle)==SQLITE_OK)&&(sqlite3_exec(handle,(string("SELECT aid, username FROM accounts WHERE sid=")+sid).data(),accounts_callback,0,NULL)==SQLITE_OK))
	{		
		return accounts;
	}
	return map<string,string>();
}
bool check_table(sqlite3* handle,string db,string columns)
{
	if(sqlite3_exec(handle,string("SELECT * FROM "+db+" LIMIT 1").data(),0,0,NULL)!=SQLITE_OK)
	{
		if(sqlite3_exec(handle,string("CREATE TABLE "+db+"("+columns+")").data(),0,0,NULL)!=SQLITE_OK)
		{
			cout<<sqlite3_errmsg(handle)<<endl;
			return false;
		}
		cout<<db<<" built"<<endl;
	}
	cout<<db<<" found"<<endl;
	return true;
}
bool initdb()
{
	sqlite3 *handle;
	if(sqlite3_open("db",&handle)==SQLITE_OK)
	{
		if(check_table(handle,"services","sid INTEGER PRIMARY KEY AUTOINCREMENT,service VARCHAR UNIQUE NOT NULL"))
		{
			if(check_table(handle,"accounts","aid INTEGER PRIMARY KEY AUTOINCREMENT,sid INTEGER NOT NULL,username VARCHAR NOT NULL,password VARCHAR NOT NULL COLLATE BINARY"))
			{
				sqlite3_close(handle);
				return true;
			}
		}
		sqlite3_close(handle);
	}
	return false;
}

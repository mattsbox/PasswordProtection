#include <iostream>
#include <ctime>
//#include <string>
using namespace std;
void debug_print(int line,string message)
{
	time_t rawtime;
	time(&rawtime);
	if(line)
	{
		//cout<<message<<" [Line "<<line<<"] "<<asctime(localtime(&rawtime));
	}
	else
	{
		//cout<<"["<<message<<"] "<<asctime(localtime(&rawtime));
	}
}

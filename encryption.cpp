#include <crypto++/aes.h>
using CryptoPP::AES;
#include <crypto++/cryptlib.h>
using CryptoPP::Exception;
#include <crypto++/modes.h>
using CryptoPP::CBC_Mode;
#include <crypto++/osrng.h>
using CryptoPP::AutoSeededRandomPool;
#include<crypto++/sha.h>
using CryptoPP::SHA1;
#include<crypto++/filters.h>
using CryptoPP::StringSource;
using CryptoPP::StringSink;
using CryptoPP::HashFilter;
using CryptoPP::StreamTransformationFilter;
#include<iostream>
using std::cerr;
using std::cout;
using std::endl;
#include<stdio.h>
#include"encryption.h"
string scramble(QString s1,QString s2)
{
	string hash1=applySHA1(string(s1.toAscii().data()));
	string hash2=applySHA1(string(s2.toAscii().data()));
	char x[21];
	int z;
	string final;
	for(z=0;z<20;z++)
	{
		x[z]=(hash1[z]^hash2[z]);
	}
	x[20]='\0';
	return applySHA1(string(x,20));
}
bool global_passwords_correct(QString p1,QString p2,MainWindow* mw)
{
	FILE *pass=fopen("pass","r");
	string final=scramble(p1,p2);	
	char filein[21];
	if(fgets(filein,21,pass)!=NULL)
	{
		if(final.compare(string(filein))==0&&string(filein).compare("")!=0)
		{
			return fclose(pass)==0;
		}
		else if(mw)
		{
			mw->print("INCORRECT PASSWORD");
		}
	}
	else if(mw)
	{
		mw->print("UNABLE TO READ PASSWORD FILE");
	}
	fclose(pass);
	return false;
}
string applySHA1(string text)
{
	string result;
	try
	{
		SHA1 hash;
		StringSource(text,true,new HashFilter(hash,new StringSink(result)));
	}
	catch(const CryptoPP::Exception& e)
	{
		return "";
	}
	return result;
}
string encryptAES(string data,string skey)
{
	string result;
	AutoSeededRandomPool rando;
	//Prepare space for the key and one more space for the null terminator
	unsigned char key[AES::MAX_KEYLENGTH+1];
	int keylength=0;
	//Generate a random initialization vector
	unsigned char iv[AES::BLOCKSIZE];
	rando.GenerateBlock(iv,sizeof(iv));
	//Move up to the maximum key length worth of bytes into the designated space
	memcpy(key,skey.data(),AES::MAX_KEYLENGTH);
	keylength=(int)skey.length();
	if(keylength<=AES::MAX_KEYLENGTH)
	{
		while(keylength%AES::BLOCKSIZE)
		{
			key[keylength]='0';
			keylength++;
		}
		key[keylength]='\0';
	}
	//Otherwise, if the key is at maximum length, just add the null terminator
	else
	{
		key[AES::MAX_KEYLENGTH]='\0';
		keylength=AES::MAX_KEYLENGTH;
	}
	try
	{
		//Prepare the encryption
		CBC_Mode<AES>::Encryption e;
		e.SetKeyWithIV(key,keylength,iv);
		//Send data into a pipeline from StringSource through StreamTransformationFilter and into StringSink, to fill cipher
		StringSource(data,true,new StreamTransformationFilter(e,new StringSink(result)/*,StreamTransformationFilter::ZEROS_PADDING*/));
		result=string(iv,iv+sizeof(iv)/sizeof(char))+result;
	}
	catch(const CryptoPP::Exception& e)
	{
		cerr<<e.what()<<endl;
		return "";
	}
	return result;
}
string decryptAES(string data,string skey)
{
	string result,siv=data.substr(0,AES::BLOCKSIZE);
	data=data.substr(AES::BLOCKSIZE);
	unsigned char iv[AES::BLOCKSIZE];
	memcpy((char*)iv,siv.c_str(),AES::BLOCKSIZE);
	//Prepare space for the key and one more space for the null terminator
	unsigned char key[AES::MAX_KEYLENGTH+1];
	int keylength=0;
	//Move up to the maximum key length worth of bytes into the designated space
	memcpy(key,skey.data(),AES::MAX_KEYLENGTH);
	keylength=(int)skey.length();
	if(keylength<=AES::MAX_KEYLENGTH)
	{
		while(keylength%AES::BLOCKSIZE)
		{
			key[keylength]='0';
			keylength++;
		}
		key[keylength]='\0';
	}
	//Otherwise, if the key is at maximum length, just add the null terminator
	else
	{
		key[AES::MAX_KEYLENGTH]='\0';
		keylength=AES::MAX_KEYLENGTH;
	}
	try
	{
		//Prepare the decryption
		CBC_Mode<AES>::Decryption d;
		d.SetKeyWithIV(key,keylength,iv);
		//Send data into a pipeline from StringSource through StreamTransformationFilter and into StringSink, to fill data
		StringSource(data,true,new StreamTransformationFilter(d,new StringSink(result)/*,StreamTransformationFilter::ZEROS_PADDING*/));
	}
	catch(const CryptoPP::Exception& e)
	{
		cerr<<e.what()<<endl;
		return "";
	}
	return result;	
}

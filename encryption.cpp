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
#include"encryption.h"
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
		cerr<<e.what()<<endl;
		return "";
	}
	//cout<<"text"<<text<<endl<<"result"<<result<<endl;
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
		StringSource(data,true,new StreamTransformationFilter(e,new StringSink(result)));
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
	cout<<"NOT COPIED"<<endl;	
	memcpy((char*)iv,siv.c_str(),AES::BLOCKSIZE);
	cout<<"NOW IT'S COPIED"<<endl;
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
		StringSource(data,true,new StreamTransformationFilter(d,new StringSink(result)));
	}
	catch(const CryptoPP::Exception& e)
	{
		cerr<<e.what()<<endl;
		return "";
	}
	return result;	
}

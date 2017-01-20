#pragma once

#include <iostream>
#include <string>

using namespace std;

class TString
{
private:
	char *str;
	int len;
public:
	TString& operator++(int);
	TString& operator++();
	char operator[](int index);
	bool operator ==(TString &t);
	operator char *();
	friend ostream& operator << (ostream& wyjscie, TString & t);
	friend istream& operator >> (istream& wejscie, TString & t);
	TString& operator =(const TString & t);

	void print() {
		std::cout << this->str;
	};
	int getLen();
	char* getStr();
	TString(const TString & t);
	TString(char *str, int len);
	TString(char *str);
	TString();
	~TString();
};




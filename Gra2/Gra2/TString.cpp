#include "TString.h"
#include <string>

using namespace std;

bool TString::operator ==(TString &t) 
{
	if (strcmp(this->str, t.str) == 0) {
		return true;
	}
	else {
		return false;
	}
}

TString::operator char *() 
{
	return this->str;
}

ostream& operator << (ostream& wyjscie, TString & t) 
{
	wyjscie << t.str << endl;

	cout << "operator ostream << TString" << endl;

	return wyjscie;
}

istream& operator >> (istream& wejscie, TString & t) 
{
	char c;
	int len = 0;
	int start = 256;

	delete[] t.str;
	t.str = (char*)malloc(sizeof(char) * start);
		
	while (wejscie.get(c)) {
		if (c == '\n') {
			break;
		}
		if (len <= start) {
			t.str[len] = c;
		}
		else {
			t.str = (char *)realloc(t.str, len * 2);
			t.str[len] = c;
		}
		len++;
	}
		
	t.str = (char *)realloc(t.str, len + 1);
	t.str[len] = '\0';

	cout << "operator istream >> TString" << endl;

	return wejscie;
};

TString& TString::operator =(const TString & t) 
{
	if (this != &t) {
		delete[] this->str;
		this->len = t.len;
		this->str = new char[this->len + 1];
		strcpy(this->str, t.str);
		this->str[this->len] = '\0';
		cout << "operator przypisanie TString" << endl;
	}
	return *this;
}

TString::TString(const TString & t) 
{
	this->len = t.len;
	this->str = t.str;
	cout << "Konstruktor kopiujacy TString" << endl;
}

int TString::getLen() 
{
	return this->len;
}

char* TString::getStr()
{
	return this->str;
}

TString::TString(char *str, int len) 
{
	if (str != "" && str != NULL && len > 0) {
		this->len = len;
		this->str = new char[this->len + 1];
		strcpy(this->str, str);
		this->str[len] = '\0';
	}
	cout << "Konstruktor dwuarg TString" << endl;
}

TString::TString(char *str)
{
	if (str != "" && str != NULL) {
		this->len = strlen(str);
		this->str = new char[this->len + 1];
		strcpy(this->str, str);
		this->str[len] = '\0';
	}
	cout << "Konstruktor jednoarg TString" << endl;
}

TString::TString()
{
	this->len = 1;
	this->str = new char[1];
	this->str[0] = '\0';
	cout << "Konstruktor bezarg TString" << endl;
}


TString::~TString()
{
	delete[] this->str;
	cout << "Destruktor TString" << endl;
}

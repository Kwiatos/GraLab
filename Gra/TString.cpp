#include "TString.h"
#include <string>

using namespace std;

TString& TString::operator++(int)
{
	char *nazwa = new char[this->len + 1];
	strcpy(nazwa, this->str);

	delete[] this->str;
	this->str = new char[this->len + 2];

	strcpy(this->str, nazwa);

	this->str[len] = '_';
	this->str[len + 1] = '\0';
	this->len += 1;

	delete[] nazwa;

	cout << "operator postinkrementacji TString" << endl;

	return *this;
}

TString& TString::operator++()
{
	char *nazwa = new char[this->len + 1];
	strcpy(nazwa, this->str);

	delete[] this->str;
	this->len += 1;
	this->str = new char[this->len + 1];

	this->str[0] = '#';
	this->str[1] = '\0';

	strcat(this->str, nazwa);

	delete[] nazwa;

	cout << "operator preinkrementacji TString" << endl;

	return *this;
}

char TString::operator[](int index)
{
	int len = strlen(this->str);

	if (index >= 0 && len <= index) {
		return this->str[index];
	}
	else {
		cout << "Podana wartoœæ jest poza ³añcuchem" << endl;
	}

	cout << "operator indeksowania TString" << endl;
}

bool TString::operator ==(TString &t)
{
	cout << "operator przyrównania == TString" << endl;
	if (strcmp(this->str, t.str) == 0) {
		return true;
	}
	else {
		return false;
	}
}

TString::operator char *()
{
	cout << "operator rzutowania () TString" << endl;
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
	t.len = len + 1;

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

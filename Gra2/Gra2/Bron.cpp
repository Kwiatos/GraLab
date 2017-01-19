#include "Bron.h"

using namespace std;

int Bron::getZasieg() {
	return this->zasieg;
}
int Bron::getSila_razenia(){
	return this->sila_razenia;
}
int Bron::getSzybkosc_ataku() {
	return this->szybkosc_ataku;
}
TString& Bron::getNazwa() {
	return this->nazwa;
}

void Bron::print()
{
	cout << "Nazwa broni: " << this->nazwa.getStr() << endl;
	cout << "Sila razenia: " << this->sila_razenia << endl;
	cout << "Szybkosc ataku: " << this->szybkosc_ataku << endl;
	cout << "Zasieg: " << this->zasieg << endl;
}

Bron::Bron(int zasieg, int sila_razenia, int szybkosc_ataku, TString &nazwa) :nazwa(nazwa.getStr())
{
	this->zasieg = zasieg;
	this->sila_razenia = sila_razenia;
	this->szybkosc_ataku = szybkosc_ataku;
	cout << "Konstruktor czteroarg Bron" << endl;
}

Bron::Bron(int zasieg, int sila_razenia, int szybkosc_ataku)
{
	this->zasieg = zasieg;
	this->sila_razenia = sila_razenia;
	this->szybkosc_ataku = szybkosc_ataku;
	cout << "Konstruktor trojarg Bron" << endl;
}

Bron::Bron(TString &nazwa) :nazwa(nazwa.getStr())
{
	this->sila_razenia = 10;
	this->szybkosc_ataku = 10;
	this->zasieg = 10;
	cout << "Konstruktor jednoarg Bron" << endl;
}

Bron::Bron()
{
	this->sila_razenia = 10;
	this->szybkosc_ataku = 10;
	this->zasieg = 10;
	cout << "Konstruktor bezarg Bron" << endl;
}


Bron::~Bron()
{
	cout << "Destruktor Bron" << endl;
}

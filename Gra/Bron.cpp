#include "Bron.h"

using namespace std;
ostream& operator << (ostream& wyjscie, Bron & b)
{
	cout << b.nazwa;
	wyjscie << "Sila razenia: " << b.sila_razenia << endl << "Szybkosc ataku: " << b.szybkosc_ataku << endl << "Zasieg broni" << b.zasieg << endl;

	return wyjscie;
}

istream& operator >> (istream& wejscie, Bron & b)
{
	cout << "Podaj nazwe broni: " << endl;
	//operator strumieniowy wejscia TString
	cin >> b.nazwa;

	cout << "Podaj sile razenia: " << endl;
	wejscie >> b.sila_razenia;
	cout << "Podaj szybkosc ataku: " << endl;
	wejscie >> b.szybkosc_ataku;
	cout << "Podaj zasieg broni: " << endl;
	wejscie >> b.zasieg;

	return wejscie;
}

Bron& Bron::operator =(Bron & b)
{
	if (this != &b) {
		//wywo³a siê operator przyrównania TStringów
		if (!(this->nazwa == b.nazwa)) {
			//wywo³a siê operator przypisania TStringów
			this->nazwa = b.nazwa;
			this->sila_razenia = b.sila_razenia;
			this->szybkosc_ataku = b.szybkosc_ataku;
			this->zasieg = b.zasieg;
		}
		cout << "operator przypisanie Bron" << endl;
		return *this;
	}
}

int Bron::getZasieg() {
	return this->zasieg;
}
int Bron::getSila_razenia() {
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

Bron::Bron(const Bron &bron)
{
	this->sila_razenia = bron.sila_razenia;
	this->szybkosc_ataku = bron.szybkosc_ataku;
	this->zasieg = bron.zasieg;

	//wywo³a siê operator przypisania
	this->nazwa = bron.nazwa;

	cout << "Konstruktor kopiuj¹cy Bron" << endl;
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

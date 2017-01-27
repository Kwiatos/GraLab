#include "FabrykaBroni.h"

char* FabrykaBroni::losujPrzymiotnik(int numer) {

	char* przymiotnik = new char[256];
	int ilosc_n = 0;


	if (numer > 0 && numer <= this->ilosc_przymiotnikow) {
		this->ilosc_przymiotnikow++;
		int losuj = rand() % this->ilosc_przymiotnikow + 1;

		//while()

	}
	return NULL;
}

Bron& FabrykaBroni::stworzLuk()
{



	this->przymiotnik.open("przymiotniki.txt");



	int sila_razenia = rand() % 10 + 5;
	int zasieg = rand() % 11 + 10;
	int szybkosc_ataku = rand() % 11 + 10;

	Bron *Luk = new Bron(zasieg, sila_razenia, szybkosc_ataku);

	return *Luk;
}
/*Bron FabrykaBroni::stworzKusze() {

}
Bron FabrykaBroni::stworzMiecz() {

}
Bron FabrykaBroni::stworzTopor() {

}
Bron FabrykaBroni::stworzLosowo() {

}*/

FabrykaBroni::FabrykaBroni()
{
	string linia;
	int i= 0;

	this->ilosc_osob = 0;
	this->ilosc_przymiotnikow = 0;
	this->ilosc_typow = 0;

	this->przymiotnik.open("przymiotnik.txt");
	if (this->przymiotnik.is_open()) {
		while (getline(this->przymiotnik, linia)) {
			this->ilosc_przymiotnikow++;
		}

		this->przymiotnik.clear();
		this->przymiotnik.seekg(0);

		this->przymiotnikiS = new string[this->ilosc_przymiotnikow];

	}

	while (getline(this->przymiotnik, linia)) {
		this->przymiotnikiS[i] = linia;
	}

	this->osoba.open("osoba.txt");
	if (this->osoba.is_open()) {
		while (getline(this->osoba, linia)) {
			this->ilosc_osob++;
		}
	}

	this->typ.open("typ.txt");
	if (this->typ.is_open()) {
		while (getline(this->typ, linia)) {
			this->ilosc_typow++;
		}
	}
}


FabrykaBroni::~FabrykaBroni()
{
	this->przymiotnik.close();
	this->osoba.close();
	this->typ.close();
}

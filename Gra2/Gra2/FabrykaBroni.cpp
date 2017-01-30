#include "FabrykaBroni.h"

Bron& FabrykaBroni::stworzLuk()
{
	int sila_razenia = rand() % 10 + 5;
	int zasieg = rand() % 11 + 10;
	int szybkosc_ataku = rand() % 11 + 10;

	int losujPrzymiotnik = rand() % 5;
	int losujOsobe = rand() % 5;
	int losujTyp = rand() % 5;

	string nazwaBroni = this->przymiotniki[losujPrzymiotnik] + " " + this->typy[losujTyp] + " " + this->osoby[losujOsobe];

	char nazwaBroniOK[300];

	for (int i = 0; i < nazwaBroni.length(); i++) {
		nazwaBroniOK[i] = nazwaBroni[i];
	}
	nazwaBroniOK[nazwaBroni.length()] = '\0';

	TString bron(nazwaBroniOK);

	Bron *Luk = new Bron(zasieg, sila_razenia, szybkosc_ataku, bron);

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
	string linia, przymiotniki[5];
	char* tmp[5];
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

		while (getline(this->przymiotnik, linia)) {
			this->przymiotniki[i] = linia;
			i++;
		}
	}
	i = 0;
	this->osoba.open("osoba.txt");
	if (this->osoba.is_open()) {
		while (getline(this->osoba, linia)) {
			this->ilosc_osob++;
		}

		this->osoba.clear();
		this->osoba.seekg(0);

		while (getline(this->osoba, linia)) {
			this->osoby[i] = linia;
			i++;
		}
	}

	i = 0;
	this->typ.open("typ.txt");
	if (this->typ.is_open()) {
		while (getline(this->typ, linia)) {
			this->ilosc_typow++;
		}

		this->typ.clear();
		this->typ.seekg(0);

		while (getline(this->typ, linia)) {
			this->typy[i] = linia;
			i++;
		}
	}
}


FabrykaBroni::~FabrykaBroni()
{
	this->przymiotnik.close();
	this->osoba.close();
	this->typ.close();
}

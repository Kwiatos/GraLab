#pragma once
#include "Bron.h"
#include "TString.h"
#include <fstream>

class FabrykaBroni
{
private:
	fstream osoba;
	fstream przymiotnik;
	fstream typ;
	int ilosc_osob, ilosc_przymiotnikow, ilosc_typow;
	FabrykaBroni();
	string przymiotniki[5], osoby[5], typy[5];
public:

	static FabrykaBroni& getFabryka() {
		static FabrykaBroni fabryka;
		return fabryka;
	}
	Bron& stworzLuk();
	Bron stworzKusze();
	Bron stworzMiecz();
	Bron stworzTopor();
	Bron stworzLosowo();

	~FabrykaBroni();
};


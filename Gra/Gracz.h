#pragma once
#include <iostream>
#include <typeinfo>
#include "TString.h"
#include "Bron.h"

class Gracz
{
private:
	Bron bron;
	TString nazwa;

public:
	friend void operator << (ostream& wyjscie, Gracz & g);
	friend void operator >> (istream& wejscie, Gracz & g);
	Gracz& operator =(Gracz & g);
	bool tenTyp(TString &typ);
	void print();
	Gracz(Gracz &g);
	Gracz(TString &nazwa, Bron &bron);
	Gracz(TString &nazwa);
	Gracz();
	~Gracz();
};
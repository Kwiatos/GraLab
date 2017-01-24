#pragma once
#include <iostream>
#include <typeinfo>
#include "TString.h"
#include "Bron.h"

class Gracz
{
protected:
	Bron bron;
	TString nazwa;
	float zycie;

public:
	friend void operator << (ostream& wyjscie, Gracz & g);
	friend void operator >> (istream& wejscie, Gracz & g);
	Gracz& operator =(Gracz & g);
	bool tenTyp(TString &typ);
	virtual void print();
	void atakuj(Gracz gracz);
	void obrona(Gracz gracz);
	Gracz(Gracz &g);
	Gracz(TString &nazwa, Bron &bron);
	Gracz(TString &nazwa);
	Gracz();
	~Gracz();
};
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
	bool tenTyp(TString &typ);
	void print();
	Gracz(TString &nazwa, Bron &bron);
	Gracz(TString &nazwa);
	Gracz();
	~Gracz();
};
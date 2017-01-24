#pragma once

#include "TString.h"

class Bron
{
private:
	int zasieg, sila_razenia, szybkosc_ataku;
	TString nazwa;
public:
	friend ostream& operator << (ostream& wyjscie, Bron & b);
	friend istream& operator >> (istream& wejscie, Bron & b);
	Bron& operator =(Bron & b);
	void print();
	int getZasieg();
	int getSila_razenia();
	int getSzybkosc_ataku();
	TString& Bron::getNazwa();
	Bron(const Bron &bron);
	Bron(int zasieg, int sila_razenia, int szybkosc_ataku, TString &nazwa);
	Bron(int zasieg, int sila_razenia, int szybkosc_ataku);
	Bron(TString &nazwa);
	Bron();
	~Bron();
};
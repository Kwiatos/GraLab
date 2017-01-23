#pragma once
#include "Gracz.h"
#include "Wspolrzedne.h"

class Wojownik :
	public Gracz
{
private:
	Wspolrzedne wspolrzedne;
public:
	ostream& operator << (ostream& wyjscie);
	Wojownik& operator =(Wojownik & w);
	Wojownik(Wspolrzedne &wspolrzedne, Bron &bron, TString &tstring);
	Wojownik(Wojownik &w);
	Wojownik(Wspolrzedne &wspolrzedne);
	Wojownik();
	~Wojownik();
};


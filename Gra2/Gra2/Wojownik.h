#pragma once
#include "Gracz.h"
#include "Wspolrzedne.h"
#include <typeinfo>
#include <math.h>

class Wojownik :
	public Gracz
{
private:
	Wspolrzedne wspolrzedne;
public:
	void atakuj(Gracz &gracz);
	void obrona(Gracz &gracz, double d);
	ostream& operator << (ostream& wyjscie);
	Wojownik& operator =(Wojownik & w);
	Wojownik(Wspolrzedne &wspolrzedne, Bron &bron, TString &tstring);
	Wojownik(Wojownik &w);
	Wojownik(Wspolrzedne &wspolrzedne);
	Wojownik();
	~Wojownik();
};


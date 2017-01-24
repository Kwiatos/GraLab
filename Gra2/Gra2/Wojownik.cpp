#include "Wojownik.h"

void Wojownik::atakuj(Gracz &gracz){

	Wojownik *w1;

	w1 = dynamic_cast<Wojownik*>(&gracz);
	if (w1 != NULL) {
		
	
	}

}


ostream& Wojownik::operator << (ostream& wyjscie) {
	wyjscie << "Wspolrzedna x: " << this->wspolrzedne.getX() << endl << "Wspolrzedna y: " << this->wspolrzedne.getY() << endl;

	return wyjscie;
}

Wojownik& Wojownik::operator =(Wojownik & w) 
{
	this->wspolrzedne = w.wspolrzedne;
	this->bron = w.bron;
	this->nazwa = w.nazwa;
	cout << "operator przypisania wojownik" << endl;

	return *this;
}

Wojownik::Wojownik(Wspolrzedne &wspolrzedne, Bron &bron, TString &tstring): Gracz(tstring, bron)
{
	this->wspolrzedne = wspolrzedne;

	cout << "kontruktor wieloargumentowy wojownik" << endl;
}

Wojownik::Wojownik(Wojownik & w) 
{
	this->wspolrzedne = w.wspolrzedne;
	this->bron = w.bron;
	this->nazwa = w.nazwa;

	cout << "Konstruktor kopiujacy Wojownik" << endl;
}

Wojownik::Wojownik(Wspolrzedne & wspolrzedne){
	this->wspolrzedne = wspolrzedne;

	cout << "Konstruktor jednoargumentowy Wojownik" << endl;
}

Wojownik::Wojownik()
{
	
}


Wojownik::~Wojownik()
{
}

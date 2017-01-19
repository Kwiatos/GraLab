#include "Gracz.h"

using namespace std;

bool Gracz::tenTyp(TString &typ)
{
	if (this->nazwa == typ) {
		return true;	
	}
	else {
		return false;
	}
}

void Gracz::print()
{
	cout << "Klasa obiektu: " << typeid(*this).name() << endl;
	cout << "Nazwa Gracza: " << this->nazwa.getStr() << endl;
	this->print();
}

Gracz::Gracz(TString &nazwa, Bron &bron):nazwa(nazwa.getStr()), bron(bron.getNazwa())
{
	cout << "Konstruktor dwuarg Gracz" << endl;
}

Gracz::Gracz(TString &nazwa): nazwa(nazwa)
{
	cout << "Konstruktor jednoarg Gracz" << endl;
}

Gracz::Gracz()
{	
	cout << "Konstruktor bezarg Gracz" << endl;
}


Gracz::~Gracz()
{
	cout << "Destruktor Gracz" << endl;
}

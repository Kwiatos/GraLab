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

void operator << (ostream& wyjscie, Gracz & g) 
{
	cout << g.nazwa;
	cout << g.bron;
	
	cout << "Operator strumieniowy  << Gracz" << endl;
}

void operator >> (istream& wejscie, Gracz & g) 
{
	cin >> g.nazwa;
	cin >> g.bron;

	cout << "Operator strumieniowy >> Gracz" << endl;
}

Gracz& Gracz::operator =(Gracz & g)
{
	this->nazwa = g.nazwa;
	this->bron = g.bron;
	cout << "Konstruktor dwuarg Gracz" << endl;

	return *this;
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

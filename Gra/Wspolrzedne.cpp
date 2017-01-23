#include "Wspolrzedne.h"

using namespace std;

void Wspolrzedne::Przesun(int dX, int dY)
{
	this->x += dX;
	this->y += dY;

	cout << "Metoda Przesun() Wspolrzedne" << endl;
}

void Wspolrzedne::print()
{
	cout << *this;

	cout << "Metoda print() Wspolrzedne" << endl;
}

int Wspolrzedne::getY() {
	return this->y;
}

int Wspolrzedne::getX() {
	return this->x;
}

ostream& operator << (ostream& wyjscie, Wspolrzedne & w) 
{
	wyjscie << "Wspolrzedna x: " << w.getX() << endl << "Wspolrzedna y: " << w.getY() << endl;

	return wyjscie;
}

void Wspolrzedne::Przenies(int noweX, int noweY) {
	this->x = noweX;
	this->y = noweY;

	cout << "Metoda Przenies Wspolrzedne" << endl;
}

Wspolrzedne& Wspolrzedne::operator +=(const Wspolrzedne & w) {
	this->x += w.x;
	this->y += w.y;

	cout << "Konstruktor przypisania += Wspolrzedne" << endl;

	return *this;
}

Wspolrzedne& Wspolrzedne::operator =(Wspolrzedne & w)
{
	this->x = w.x;
	this->y = w.y;
	
	cout << "Operator przypisania  = Wspolrzedne" << endl;

	return *this;
}

Wspolrzedne::Wspolrzedne(int x, int y) 
{
	this->x = x;
	this->y = y;

	cout << "Konstruktor dwuargumentowy wspolrzedne" << endl;
}

Wspolrzedne::Wspolrzedne()
{
	this->x = 0;
	this->y = 0;

	cout << "Konstruktor bezargumentowy wspolrzedne" << endl;
}


Wspolrzedne::~Wspolrzedne()
{

}

#pragma once
#include <iostream>

class Wspolrzedne
{
private:
	int x;
	int y;
public:
	void Przesun(int dX, int dY);
	void print();
	int getX();
	int getY();
	friend std::ostream& operator << (std::ostream& wyjscie, Wspolrzedne & w);
	void Przenies(int noweX, int noweY);
	Wspolrzedne& operator +=(const Wspolrzedne & w);
	Wspolrzedne& operator =(Wspolrzedne & w);
	Wspolrzedne(int x, int y);
	Wspolrzedne();
	~Wspolrzedne();
};


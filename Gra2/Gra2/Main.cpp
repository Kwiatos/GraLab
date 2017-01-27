#include "Header.h"
#include <time.h>

int main() {

	int a = 5;

	FabrykaBroni::getFabryka();



	Wojownik w1;
	Gracz g1;
	Wojownik w2;

	srand(time(NULL));

	//int sila_razenia = rand() % 6 + 5; //5 -10
	//int sila_razenia = rand() % 6 + 8; //8-13
	//int sila_razenia = rand() % 11 + 15; //15-25
	//int sila_razenia = rand() % 16 + 20; //20- 35
	//int sila_razenia = rand() % 11 + 8; // 8-18
	int sila_razenia = rand() % 11 + 10; // 10-20
	//w1.atakuj(w2);


	string tekst = "tralallala";

	for (int i = 0; i < tekst.length(); i++) {
		cout << tekst[i] << endl;
	}

	/*TString s("Bartek");
	TString s1;
	//Bron *b = new Bron(*s);
	char znak = s[2];

	if (s == s1) {
		std::cout << "tralalalal dzia³a :)" << endl;
	}
	else {
		std::cout << "strutututut nie dzia³a" << endl;
	}

	Gracz g;
	Gracz g1;

	g = g1;*/


	/*Bron b;
	Bron b1(s);

	b = b1;*/

	//cin >> b;
	//cin >> g;
	//cout << g;

	//delete s;
	//delete b;		

	//cin >> s;
	//cout << s;

	//string xxx = (char *)s;
	//b->print();
	//delete s;

	cout << "";

	system("pause");
	return 0;
}
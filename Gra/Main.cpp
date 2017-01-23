#include "Header.h"


int main() {

	int a = 5;

	TString s("Bartek");
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

	g = g1;


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

	++s;

	cout << "";

	system("pause");
	return 0;
}
#include "Header.h"


int main() {

	int a = 5;

	TString s("Bartek");
	TString s1;
	//Bron *b = new Bron(*s);


	if (s == s1) {
		std::cout << "tralalalal dzia�a :)" << endl;
	}
	else {
		std::cout << "strutututut nie dzia�a" << endl;
	}

	Gracz g;

	g.tenTyp(s);


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
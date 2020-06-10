//============================================================================
// Name        : u1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

	void Eingabe(int &zahl){
		cout << "Zahl eingeben:" << endl;
		cin >> zahl;
		cout << "Sie haben die Zahl: " <<zahl<< " eingegeben" << endl;
	}

int main() {

	int zahl1{0}, zahl2{0}, auswahl{0};


	Eingabe(zahl1);
	Eingabe(zahl2);


	/*
	cout << "1. Zahl eingeben:" << endl;
	cin >> zahl1;
	cout << "Sie haben die Zahl: " <<zahl1<< " eingegeben" << endl;

	cout << "2. Zahl eingeben:" << endl;
	cin >> zahl2;
	cout << "Sie haben die Zahl: " <<zahl2<< " eingegeben" << endl;

	int differenz{0},, summe{0}, produkt{0}, quotient{0}, ;
	summe = zahl1 + zahl2;
	differenz = zahl1 - zahl2;
	produkt = zahl1 * zahl2;
	quotient = zahl1 / zahl2;


	cout << "1. Summe:" << summe << "\n2. Differenz: " << differenz << "\n3. Produkt: " << produkt << "\n4. Quotient :" << quotient << endl;
	*/

	cout << "Waehlen sie eine Rechenopperation (1 = Summe, 2 = Differenz, 3 = Produkt, 4 = Quotient)" << endl;
	Eingabe(auswahl);
	if (auswahl == 1){
		cout << "1. Summe:" << zahl1 + zahl2 << endl;
	}
	else if(auswahl == 2){
		cout << "2. Differenz: " << zahl1 - zahl2 << endl;
	}
	else if(auswahl ==3){
		cout << "3. Produkt: " << zahl1 * zahl2 << endl;
	}
	else if(auswahl == 4){
		if(zahl2 == 0){
			cout << "Fehler: Division durch Null!" << endl;
		}
		else{
		cout << "4. Quotient :" << zahl1 / zahl2 << endl;
		}
	}
	else{
		cout << "Ungueltige Eingabe" << endl;
	}

	return 0;
}

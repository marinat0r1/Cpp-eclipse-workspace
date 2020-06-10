//============================================================================
// Name        : formen.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Rechteck.h"
#include <memory>

using namespace std;

int main() {

	int auswahl{0};

	unique_ptr<Rechteck> rectangle(new Rechteck());

	double seite_a;
	cout<<"Geben Sie die Seiten a und b des Rechtecks an"<<endl;
	cout<<"Seite a: ";
	cin>>seite_a;
	rectangle->set_seite_a(seite_a);

	double seite_b;
	cout<<"Seite b: ";
	cin>>seite_b;
	rectangle->set_seite_b(seite_b);

	cout<<"Waehlen Sie nun eine Operation aus:\n1:umfang\t2.flaecheninhalt\t3.diagonalenlaenge\t4.umkreisradius\telse.alle";
	cin>>auswahl;

	switch(auswahl){
	case 1:
		cout<<"\numfang: "<<rectangle->umfang()<<endl;
		break;
	case 2:
		cout<<"\nflaecheninhalt: "<<rectangle->flaecheninhalt()<<endl;
		break;
	case 3:
		cout<<"\ndiagonallaenge: "<<rectangle->diagonalenlaenge()<<endl;
		break;
	case 4:
		cout<<"\numkreisradius: "<<rectangle->umkreisradius()<<endl;
		break;
	default:
		cout<<"\numfang: "<<rectangle->umfang()<<endl;
		cout<<"\nflaecheninhalt: "<<rectangle->flaecheninhalt()<<endl;
		cout<<"\ndiagonallaenge: "<<rectangle->diagonalenlaenge()<<endl;
		cout<<"\numkreisradius: "<<rectangle->umkreisradius()<<endl;
	}


	return 0;
}

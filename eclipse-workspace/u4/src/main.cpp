//============================================================================
// Name        : u4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
#include "Loewe.h"
#include "Antilope.h"


using namespace std;

int main() {

	unique_ptr<Loewe> muki(new Loewe(300.0));
	unique_ptr<Antilope> anti(new Antilope(50.0));

	cout<<"Tierart: "<<muki->getTierart()<<"\tGewicht: "<<muki->getGewicht()<<"\tGefahr: "<<muki->getGefaehrlichkeit_string()<<endl;
	cout<<"Tierart: "<<anti->getTierart()<<"\tGewicht: "<<anti->getGewicht()<<"\tGefahr: "<<anti->getGefaehrlichkeit_string()<<endl;

	return 0;
}

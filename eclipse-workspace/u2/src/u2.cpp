//============================================================================
// Name        : u2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int factorial(int zahl){
	if(zahl==0){
		return 1;
	}
	else{
		return zahl*factorial(zahl-1);
	}
}

int main() {

	int zahl{0},j{0};

	cout <<"Natuerliche Zahl: ";
	cin >>zahl;

	if(zahl<0){
		cout <<"\nUngueltige Eingabe"<<endl;
		zahl = 0;
	}

	int fac{1};

	j = zahl;
	while(j>1){
		fac *= j;
		j--;
	}

	//Ueberlauf bei 31-32

	cout << "fac: "<<fac<<endl;

	int fac_rec = factorial(zahl);

	cout <<"fac_recursive: "<<fac_rec<<endl;

	for(int l=0;l<40;l++){
		cout <<"\nfac_recursive: "<<"\t\t"<<"nubmer: "<<l<<"\t\t"<<factorial(l)<<endl;
	}

	return 0;
}

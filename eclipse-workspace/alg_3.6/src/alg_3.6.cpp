//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>

using namespace std;

void schleife2(int durchlauf){

	int k{0},i{0},j{0};
	int a{0},b{0},c{2};
	int n{durchlauf};

	for(j=0;j<n;j++){
		a++;
		for(i=0;i<=j;i++){
			k = k+i;
			a++;
			b++;
		}
		a++;
	}
	a++;

	double laufzeit = (n*n)*((a+b)/2)+n*((5*a+b)/2)+(a+c);

	cout <<"\nDurchlauf: "<< durchlauf<<"\t\tk: " << k << "\t\t" << "Laufzeit: " << laufzeit <<"\t\t" << "a,b: " << a <<","<< b << endl;

	// a: wie oft wird a durchlaufen?
	// b: wie oft wir b durchlaufen?
	// Laufzeit: a & b in Formal eingesetzt
	// k: Ergebniss des Algorithmus

}

int main() {

	int limit{10000};

	for(int l=0;l<=limit;l++){
		schleife2(l);
	}

	//Mit Schleife3 wdh

	return 0;
}

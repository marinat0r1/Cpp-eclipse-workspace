//============================================================================
// Name        : u5_vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Vector.h"

using namespace std;

int main() {

	//Standard Konstruktor
	Vector* vec1 = new Vector();

	vec1->setComponent(0,2.3);
	vec1->setComponent(1,3.4);
	vec1->setComponent(2,7.7);

	vec1->printComponents();
	delete vec1;
	cout<<"\n"<<endl;

	//Dimension Konstruktor
	Vector* vec2 = new Vector(7);

	vec2->setComponent(0,4.5);
	vec2->setComponent(1,5.7);
	vec2->setComponent(2,2.7);
	vec2->setComponent(3,9.7);
	vec2->setComponent(4,2.5);
	vec2->setComponent(5,1.6);
	vec2->setComponent(6,4.4);

	vec2->printComponents();


	//Copy Konstruktor
	Vector* vec3 = vec2;

	vec3->printComponents();
	delete vec2;
	//delete vec3;
	cout<<"\n"<<endl;


	//Vector Operatoren
	Vector vec4;

	vec4.setComponent(0,3.5);
	vec4.setComponent(1,4.6);
	vec4.setComponent(2,9.2);
	vec4.printComponents();

	Vector vec5;

	vec5.setComponent(0,5.4);
	vec5.setComponent(1,9.6);
	vec5.setComponent(2,1.2);
	vec5.printComponents();

	Vector vec6 = vec4 + vec5;
	vec6.printComponents();

	cout<<"\n"<<endl;
	Vector vec7 = vec4 - vec5;
	vec7.printComponents();

	cout<<"\n"<<endl;
	Vector vec8 = vec4*3.4;
	vec8.printComponents();
	vec8 = 3.4*vec4;
	vec8.printComponents();

	cout<<"\n"<<endl;
	double skalarprodukt = vec4*vec5;
	cout<<"Skalarprodukt: "<<skalarprodukt<<endl;

	cout<<"\n"<<endl;
	double euclideanLengthVec4 = vec4.getEuclideanLength();
	cout<<"Euklydische Laenge: "<<euclideanLengthVec4<<endl;

	cout<<"\n"<<endl;
	Vector vec9;
	vec9 = vec8;
	vec9.printComponents();

	return 0;
}
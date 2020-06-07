//============================================================================
// Name        : u3_paketverwaltung.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Displays a status request using 3 different methods to
//				 initialize the class Paket
//============================================================================

#include <iostream>
#include <string>
#include <memory>
#include "paket.h"

using namespace std;

int main() {

	// *** STATISCHE INSTANZIIERUNG ***
	Paket pakii;

	cout<<"\nSTEP 1 STATIC OBJECTS\n"<<endl;
	cout<<"printing from setter methods\n"<<endl;
	pakii.setAddress("the street of wisdom");
	pakii.setPlace("we are preparing for the journey");
	pakii.setStatus(Paket::PACKED);
	pakii.setWeight(0.2);

	string adress_of_pakii = pakii.getAddress();
	string place_of_pakii = pakii.getPlace();
	Paket::STATUS status_of_pakii = pakii.getDelivery();
	double weight_of_pakii = pakii.getWeight();

	cout<<"\nprinting from main after getting values from getter methods\n"<<endl;
	cout<<"adress_of_pakii: "<<adress_of_pakii<<endl;
	cout<<"place_of_pakii: "<<place_of_pakii<<endl;
	cout<<"status_of_pakii: "<<status_of_pakii<<endl;
	cout<<"weight_of_pakii: "<<weight_of_pakii<<endl;


	// *** DYNAMISCHE INSTANZIIERUNG ***
	Paket *rakii = nullptr;
	rakii = new Paket;

	string rakiis_adress = "street of the challanger";
	string rakiis_place = "we will be here very soon";
	Paket::STATUS rakiis_status = Paket::OUT_FOR_DELIVERY;
	double rakiis_weight  = 1.2;

	cout<<"\n\nSTEP 2 DYNAMIC OBJECTS\n"<<endl;
	cout<<"printing from setter methods\n"<<endl;
	rakii->setAddress(rakiis_adress);
	rakii->setPlace(rakiis_place);
	rakii->setStatus(rakiis_status);
	rakii->setWeight(rakiis_weight);

	string adress_of_rakii = rakii->getAddress();
	string place_of_rakii = rakii->getPlace();
	Paket::STATUS status_of_rakii = rakii->getDelivery();
	double weight_of_rakii = rakii->getWeight();

	cout<<"\nprinting from main after getting values from getter methods\n"<<endl;
	cout<<"adress_of_rakii: "<<adress_of_rakii<<endl;
	cout<<"place_of_rakii: "<<place_of_rakii<<endl;
	cout<<"status_of_rakii: "<<status_of_rakii<<endl;
	cout<<"weight_of_rakii: "<<weight_of_rakii<<endl;

	delete rakii;
	rakii = nullptr;

	// *** SMART POINTER ***
	unique_ptr<Paket> makii(new Paket());

	cout<<"\n\nSTEP 3 SMART POINTERS\n"<<endl;
	cout<<"printing from setter methods\n"<<endl;
	makii->setAddress("road of the legendary");
	makii->setPlace("we are here");
	makii->setStatus(Paket::DELIVERED);
	makii->setWeight(10000.02);

	cout<<"\n"<<endl;

	return 0;
}

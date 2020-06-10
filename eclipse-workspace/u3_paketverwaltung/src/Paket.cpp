/*
 * Paket.cpp
 *
 *  Created on: May 20, 2020
 *      Author: Marin
 */

#include "Paket.h"

	Paket::Paket()
	{
		cout<<"Konstruktor wurde aufgerufen"<<endl;
		weight = 0.0;
		delivery = EMPTY;

	};
	Paket::~Paket()
	{
		cout<<"Destruktor wurde aufgerufen"<<endl;
	};

	//Getter
	double Paket::getWeight()
	{
		return weight;
	};

	string Paket::getAddress()
	{
		return address;
	};

	string Paket::getPlace()
	{
		return place;
	};

	Paket::STATUS Paket::getDelivery()
	{
		return delivery;
	};


	//Setter
	void Paket::setWeight(double _weight)
	{
		weight = _weight;
		cout<<"weight set to: "<<weight<<endl;
	};

	void Paket::setAddress(std::string _address)
	{
		address = _address;
		cout<<"address set to: "<<address<<endl;
	};

	void Paket::setPlace(std::string _place)
	{
		place = _place;
		cout<<"place set to: "<<place<<endl;
	};

	void Paket::setStatus(STATUS _delivery)
	{
		delivery = _delivery;
		switch(delivery){
		case 0:
			cout<<"delivery set to: EMPTY"<<endl;
			break;
		case 1:
			cout<<"delivery set to: PACKED"<<endl;
			break;
		case 2:
			cout<<"delivery set to: OUT_FOR_DELIVERY"<<endl;
			break;
		case 3:
			cout<<"delivery set to: DELIVERED"<<endl;
			break;
		default:
			cout<<"wrong choice"<<endl;
		}
	};

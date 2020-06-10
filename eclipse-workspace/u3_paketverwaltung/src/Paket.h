/*
 * Paket.h
 *
 *  Created on: May 20, 2020
 *      Author: Marin
 */

#ifndef PAKET_H_
#define PAKET_H_

#include <iostream>
#include <string>

using namespace std;


class Paket {
public:

	enum STATUS{EMPTY,PACKED,OUT_FOR_DELIVERY,DELIVERED};

	Paket();
	~Paket();

	//Getter
	double getWeight();
	string getAddress();
	string getPlace();
	STATUS getDelivery();

	//Setter
	void setWeight(double _weight);
	void setAddress(std::string _address);
	void setPlace(std::string _place);
	void setStatus(STATUS _delivery);


private:
	double weight;
	string address;
	string place;
	STATUS delivery;
};

#endif /* PAKET_H_ */

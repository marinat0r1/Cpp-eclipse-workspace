/*
 * Zootier.cpp
 *
 *  Created on: Jun 3, 2020
 *      Author: Marin
 */

#include "Zootier.h"

Zootier::Zootier() {
	gewicht = 0.0;
	gefahr = UNGEFAEHRLICH;
}
Zootier::Zootier(double _gewicht, GEFAEHRLICHKEIT _gefahr)
: gewicht(_gewicht), gefahr(_gefahr)
{

}


Zootier::~Zootier() {
	// TODO Auto-generated destructor stub
}

//Getter
double Zootier::getGewicht() const{
	return gewicht;
}

Zootier::GEFAEHRLICHKEIT Zootier::getGefaehrlichkeit() const{
	return gefahr;
}

//Setter
void Zootier::setGewicht(double _gewicht){
	gewicht = _gewicht;
}

void Zootier::setGefaehrlichkeit(Zootier::GEFAEHRLICHKEIT _gefahr){
	gefahr = _gefahr;
}

//Methods
std::string Zootier::getGefaehrlichkeit_string(){
	switch(gefahr){
	case 0:
		return "SEHR GEFAEHRLICH";
		break;
	case 1:
		return "GEFAEHRLICH";
		break;
	case 2:
		return "UNGEFAEHRLICH";
		break;
	default:
		return "UNDEFINED";

	}
};

//Methods
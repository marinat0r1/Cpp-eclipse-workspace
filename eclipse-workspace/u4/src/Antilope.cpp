/*
 * Antilope.cpp
 *
 *  Created on: Jun 3, 2020
 *      Author: Marin
 */

#include "Antilope.h"

Antilope::Antilope() {
	gewicht = 0.0;
	gefahr = UNGEFAEHRLICH;

}
Antilope::Antilope(double _gewicht)
{
	gefahr = UNGEFAEHRLICH;
	gewicht = _gewicht;

}

Antilope::~Antilope() {
	// TODO Auto-generated destructor stub
}

std::string Antilope::getTierart(){
	return "Antilope";
};

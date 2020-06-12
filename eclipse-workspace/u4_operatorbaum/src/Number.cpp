/*
 * Number.cpp
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#include "Number.h"

Number::Number() {
	value = 0.0;

}

Number::~Number() {
	// TODO Auto-generated destructor stub
}

double Number::getValue()
{
	return value;
};

void Number::setValue(double _value)
{
	value = _value;
};

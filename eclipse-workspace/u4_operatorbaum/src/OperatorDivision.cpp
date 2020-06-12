/*
 * OperatorDivision.cpp
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#include "OperatorDivision.h"

OperatorDivision::OperatorDivision() {
	// TODO Auto-generated constructor stub

}

OperatorDivision::~OperatorDivision() {
	// TODO Auto-generated destructor stub
}

double OperatorDivision::getValue()
{
	return left->getValue() / right->getValue();
};

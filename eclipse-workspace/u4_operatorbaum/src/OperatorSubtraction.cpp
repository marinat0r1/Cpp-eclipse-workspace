/*
 * OperatorSubtraction.cpp
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#include "OperatorSubtraction.h"

OperatorSubtraction::OperatorSubtraction() {
	// TODO Auto-generated constructor stub

}

OperatorSubtraction::~OperatorSubtraction() {
	// TODO Auto-generated destructor stub
}

double OperatorSubtraction::getValue()
{
	return left->getValue() - right->getValue();
};

/*
 * OperatorMultiplication.cpp
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#include "OperatorMultiplication.h"

OperatorMultiplication::OperatorMultiplication() {
	// TODO Auto-generated constructor stub

}

OperatorMultiplication::~OperatorMultiplication() {
	// TODO Auto-generated destructor stub
}

double OperatorMultiplication::getValue()
{
	return left->getValue() * right->getValue();
};

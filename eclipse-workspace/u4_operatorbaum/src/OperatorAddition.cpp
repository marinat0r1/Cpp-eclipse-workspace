/*
 * OperatorAddition.cpp
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#include "OperatorAddition.h"

OperatorAddition::OperatorAddition() {
	// TODO Auto-generated constructor stub

}

OperatorAddition::~OperatorAddition() {
	// TODO Auto-generated destructor stub
}

double OperatorAddition::getValue()
{
	return left->getValue() + right->getValue();
};

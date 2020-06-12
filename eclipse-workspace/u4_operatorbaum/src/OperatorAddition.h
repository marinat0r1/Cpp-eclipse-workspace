/*
 * OperatorAddition.h
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#ifndef OPERATORADDITION_H_
#define OPERATORADDITION_H_

#include "Operator.h"

class OperatorAddition : public Operator{
public:
	OperatorAddition();
	virtual ~OperatorAddition();

	double getValue();
};

#endif /* OPERATORADDITION_H_ */

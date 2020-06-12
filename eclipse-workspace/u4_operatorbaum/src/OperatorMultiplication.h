/*
 * OperatorMultiplication.h
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#ifndef OPERATORMULTIPLICATION_H_
#define OPERATORMULTIPLICATION_H_

#include "Operator.h"

class OperatorMultiplication : public Operator {
public:
	OperatorMultiplication();
	virtual ~OperatorMultiplication();

	double getValue();
};

#endif /* OPERATORMULTIPLICATION_H_ */

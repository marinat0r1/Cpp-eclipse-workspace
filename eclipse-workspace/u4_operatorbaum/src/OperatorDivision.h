/*
 * OperatorDivision.h
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#ifndef OPERATORDIVISION_H_
#define OPERATORDIVISION_H_

#include "Operator.h"

class OperatorDivision : public Operator{
public:
	OperatorDivision();
	virtual ~OperatorDivision();

	double getValue();

};

#endif /* OPERATORDIVISION_H_ */

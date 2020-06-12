/*
 * OperatorSubtraction.h
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#ifndef OPERATORSUBTRACTION_H_
#define OPERATORSUBTRACTION_H_

#include "Operator.h"

class OperatorSubtraction : public Operator {
public:
	OperatorSubtraction();
	virtual ~OperatorSubtraction();

	double getValue();

};

#endif /* OPERATORSUBTRACTION_H_ */

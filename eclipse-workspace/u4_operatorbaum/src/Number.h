/*
 * Number.h
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#ifndef NUMBER_H_
#define NUMBER_H_

#include "Node.h"

class Number : public Node{
public:
	Number();
	virtual ~Number();

	double getValue();

	void setValue(double _value);

private:

	double value;

};

#endif /* NUMBER_H_ */

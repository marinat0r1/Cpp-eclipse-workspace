/*
 * Double.h
 *
 *  Created on: Jun 7, 2020
 *      Author: Marin
 */

#ifndef DOUBLE_H_
#define DOUBLE_H_

class Double {
public:
	Double();
	virtual ~Double();

	int data;
	Double* next;
	Double* prev;

};

#endif /* DOUBLE_H_ */
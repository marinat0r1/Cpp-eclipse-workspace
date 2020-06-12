/*
 * Operator.h
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#ifndef OPERATOR_H_
#define OPERATOR_H_

#include  "Node.h"

class Operator : public Node{
public:
	Operator();
	virtual ~Operator();

	Node* getLeft();
	Node* getRight();


	void setLeft(Node* ptr);
	void setRight(Node* ptr);


	virtual double getValue() = 0;

protected:
	Node* left;
	Node* right;

};

#endif /* OPERATOR_H_ */

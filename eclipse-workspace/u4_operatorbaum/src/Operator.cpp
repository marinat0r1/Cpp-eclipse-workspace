/*
 * Operator.cpp
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#include "Operator.h"

Operator::Operator() {
	right = nullptr;
	left = nullptr;

}

Operator::~Operator() {
	// TODO Auto-generated destructor stub
}

Node* Operator::getLeft()
{
	return left;
};

Node* Operator::getRight()
{
	return right;
};


void Operator::setLeft(Node* ptr)
{
	left = ptr;
};

void Operator::setRight(Node* ptr)
{
	right = ptr;
};

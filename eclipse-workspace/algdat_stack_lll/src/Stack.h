/*
 * Stack.h
 *
 *  Created on: Jun 16, 2020
 *      Author: Marin
 */

#ifndef STACK_H_
#define STACK_H_

#include <iostream>

#include "Node.h"

class Stack {
public:
	Stack();
	virtual ~Stack();

	Node* node = new Node();
	int pos;

	Stack* stack_init(); //Legt einen neuen Stack an
	void stack_push(int value); //Legt ein Element auf den Stack
	int stack_pop(); //Entnimmt ein Element vom Stack
	void stack_delete(Stack*); //Löscht den Stack
	void print_stack();


};

#endif /* STACK_H_ */

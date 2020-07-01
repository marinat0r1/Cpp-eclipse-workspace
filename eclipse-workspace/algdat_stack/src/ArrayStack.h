/*
 * ArrayStack.h
 *
 *  Created on: Jun 15, 2020
 *      Author: Marin
 */

#ifndef ARRAYSTACK_H_
#define ARRAYSTACK_H_

#define SIZE 15

#include <iostream>

using namespace std;

class Stack {
public:
	Stack();
	virtual ~Stack();

	int *arr = new int[SIZE]{0};

	int top;


	Stack* stack_init(); //Legt einen neuen Stack an
	void stack_push(Stack* stack,int); //Legt ein Element auf den Stack
	int stack_pop(Stack* stack); //Entnimmt ein Element vom Stack
	void stack_delete(Stack* stack); //Löscht den Stack

};



#endif /* ARRAYSTACK_H_ */

/*
 * ArrayStack.h
 *
 *  Created on: Jun 15, 2020
 *      Author: Marin
 */

#ifndef STACK_H_
#define STACK_H_

#include <iostream>

#include "List.h"

using namespace std;

class Stack {
public:
	Stack();
	virtual ~Stack();

	List* list = new List();



	Stack* stack_init(); //Legt einen neuen Stack an
	void stack_push(Stack* stack,int); //Legt ein Element auf den Stack
	int stack_pop(Stack* pop_list); //Entnimmt ein Element vom Stack
	void stack_delete(Stack* stack); //Löscht den Stack

};



#endif /* STACK_H_ */

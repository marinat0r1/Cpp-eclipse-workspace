/*
 * ArrayStack.cpp
 *
 *  Created on: Jun 15, 2020
 *      Author: Marin
 */

#include "Stack.h"

Stack::Stack() {
	cout<<"Kunstruktor\n"<<endl;

}

Stack::~Stack() {
	cout<<"Destruktor\n"<<endl;

	list->value = 0;
	list = nullptr;

}

void Stack::stack_push(Stack* stack, int value)
{
	List* node = new List();
	stack->list->next = node;
	node->value = value;
	node->next = nullptr;
};


int Stack::stack_pop(Stack* pop_list)
{
	if(list == nullptr){
		cout<<"ERROR: underflow"<<endl;
		return -1;
	}
	else{
		int data = pop_list->list->value;
		List* successor = list->find_successor(list, pop_list->list);
		successor->next = nullptr;
		return data;
	}
};


void Stack::stack_delete(Stack* stack)
{
	delete stack;
	stack = nullptr;
};

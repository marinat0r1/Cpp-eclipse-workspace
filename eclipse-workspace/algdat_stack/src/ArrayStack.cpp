/*
 * ArrayStack.cpp
 *
 *  Created on: Jun 15, 2020
 *      Author: Marin
 */

#include "ArrayStack.h"

Stack::Stack() {
	cout<<"Kunstruktor\n"<<endl;

	top = -1;
}

Stack::~Stack() {
	cout<<"Destruktor\n"<<endl;

	delete[] arr;
	arr = nullptr;
	top =  -1;
}

void Stack::stack_push(Stack* stack, int value)
{
	stack->top++;
	stack->arr[top] = value;
};

int Stack::stack_pop(Stack* stack)
{
	if(stack->top <= -1){
		cout<<"ERROR: underflow"<<endl;
		return -1;
	}
	else{
		stack->top--;
		return stack->arr[top+1];
	}
};

void Stack::stack_delete(Stack* stack)
{
	delete stack;
	stack = nullptr;
	top = -1;
};


//============================================================================
// Name        : algdat_stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "ArrayStack.h"
#include "array_functions.h"

using namespace std;


int main() {

	Stack* stack = nullptr;
	stack = new Stack();

	//int *arr1 = new int[SIZE];
	//arr1 = stack->stack_init();

	stack->stack_push(stack , 1);
	stack->stack_push(stack , 2);
	stack->stack_push(stack , 3);
	stack->stack_push(stack , 4);
	stack->stack_push(stack , 4);
	stack->stack_push(stack , 6);

	print_array(stack->arr, SIZE);
	int pop1 = stack->stack_pop(stack);

	cout<<"pop1: "<<pop1<<endl;

	stack->stack_delete(stack);

	print_array(stack->arr, SIZE);
	pop1 = stack->stack_pop(stack);
	cout<<"pop1: "<<pop1<<endl;

	delete stack;
	stack = nullptr;

	return 0;
}

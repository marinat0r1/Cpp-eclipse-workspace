//============================================================================
// Name        : algdat_stack_ll.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

#include "Stack.h"

int main() {

	Stack* test_stack = new Stack();

	test_stack->stack_push(test_stack, 1);
	test_stack->stack_push(test_stack, 2);
	test_stack->stack_push(test_stack, 3);
	test_stack->stack_push(test_stack, 4);

	//test_stack->list->print_linkedlist(test_stack->list);

	int test_pop = test_stack->stack_pop(test_stack);

	cout<<"test_pop: "<<test_pop<<endl;
	//test_stack->list->print_linkedlist(test_stack->list);

	test_pop = test_stack->stack_pop(test_stack);
	cout<<"test_pop: "<<test_pop<<endl;

	test_stack->stack_push(test_stack, 7);
	test_stack->stack_push(test_stack, 8);
	test_stack->stack_push(test_stack, 9);

	test_pop = test_stack->stack_pop(test_stack);
	cout<<"test_pop: "<<test_pop<<endl;
	test_pop = test_stack->stack_pop(test_stack);
	cout<<"test_pop: "<<test_pop<<endl;
	test_pop = test_stack->stack_pop(test_stack);
	cout<<"test_pop: "<<test_pop<<endl;

	return 0;
}

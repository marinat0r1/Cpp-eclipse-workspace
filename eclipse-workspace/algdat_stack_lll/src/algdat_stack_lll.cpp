//============================================================================
// Name        : algdat_stack_lll.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Stack.h"
#include "Node.h"

using namespace std;


int main() {

	Stack* stack1 = nullptr;
	stack1 = new Stack();

	stack1->stack_push(1);
	stack1->stack_push(2);
	stack1->stack_push(3);
	stack1->stack_push(4);

	stack1->print_stack();

	int pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;

	stack1->print_stack();


	stack1->stack_push(7);
	stack1->stack_push(8);
	stack1->stack_push(9);
	stack1->stack_push(10);

	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();


	stack1->stack_push(1);
	stack1->stack_push(2);
	stack1->stack_push(3);
	stack1->stack_push(4);

	stack1->print_stack();

	pop1 = stack1->stack_pop();
	cout<<"pop1: "<<pop1<<endl;
	stack1->print_stack();

	delete stack1;


	return 0;
}

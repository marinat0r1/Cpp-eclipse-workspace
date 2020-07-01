/*
 * Stack.cpp
 *
 *  Created on: Jun 16, 2020
 *      Author: Marin
 */

#include "Stack.h"

Stack::Stack() {
	pos = 0;

}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}

void Stack::stack_push(int value)
{
	this->node->list_insert_last_initialize(node, value);
	pos++;
};

int Stack::stack_pop()
{
	if(pos > 0){
		Node* temp_node = node;
		int pop_value = 0, i =0;
		for(i = 0; i<pos; i++){
			temp_node = temp_node->next;
			pop_value = temp_node->data;
		}

		node->delete_list_element_new(node, pop_value);

		pos = pos-1;

		return pop_value;
	}
	else{
		return -1;
	}

};

void Stack::print_stack()
{
	this->node->print_linkedlist(this->node);
};

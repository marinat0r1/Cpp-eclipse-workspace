/*
 * Node.cpp
 *
 *  Created on: Jun 4, 2020
 *      Author: Marin
 */

#include "Node.h"

Node::Node() {
	//cout<<"Konstruktor wurde aufgerufen"<<endl;
	data = 0;
	key = -1;
	next = nullptr;

}

Node::~Node() {
	//cout<<"Destruktor wurde aufgerufen"<<endl;
	delete next;
	next = nullptr;
}

void Node::print_linkedlist(Node* list){
	list = list->next;
	while(list != nullptr){
		cout<<"->"<<list->data<<" ";
		list = list->next;
	}
	cout<<"\n"<<endl;
};

int Node::list_search(Node *list, int item){
	Node* x = list;
	int j;
	while(x != nullptr && item != x->data){
		x = x->next;
		j++;
	}
	if(x == nullptr){
		return -1;
	}
	return j;
};

Node* Node::list_search_node(Node *list, int searched_num){
	Node* x = list;
	while(x != nullptr && searched_num != x->data){
			x = x->next;
		}
	return x;
};

Node* Node::find_last_node(Node* list_node){
	while(list_node->next != nullptr){
		list_node = list_node->next;
	}
	return list_node;
};

Node* Node::find_predecessor(Node* list, Node* list_node){
	while(list->next != list_node){
		list = list->next;
	}
	return list;
};

Node* Node::find_successor(Node* list, Node* list_node){
	while(list != list_node->next){
		list = list->next;
	}
	return list;
}

void Node::list_insert_first(Node *list_head, Node *insertion_element){
	 Node* temp = list_head->next;
	 list_head->next = insertion_element;
	 insertion_element->next = temp;
};



void Node::list_insert_first_initialize(Node *list_head, int value){

	Node* new_node = nullptr;
	new_node = new Node;
	new_node->data = value;
	new_node->next = list_head->next;
	list_head->next = new_node;
};


void Node::list_insert_first_initialize_arr(Node *list_head, int number_of_elements, int arr[]){
	for(int i = 0; i<number_of_elements; i++){
		list_head->list_insert_first_initialize(list_head, arr[i]);
	}
};

void Node::list_insert_last_initialize(Node *list_head, int value){

	Node* new_node = nullptr;
	new_node = new Node;
	new_node->data = value;
	new_node->next = nullptr;
	list_head = find_last_node(list_head);
	list_head->next = new_node;

};

void Node::list_insert_last_initialize_arr(Node *list_head, int number_of_elements, int arr[]){
	for(int i = 0; i<number_of_elements; i++){
		list_head->list_insert_last_initialize(list_head, arr[i]);
	}
};

void Node::delete_list_element(Node *list, int deletion_num){
	while(list != nullptr && deletion_num != list->next->data){
		list = list->next;
	}
	Node* temp = list->next->next;
	list->next->next = nullptr;
	list->next = temp;
};

void Node::delete_list_element_new(Node *list, int deletion_num){
	Node* temp = nullptr;
	temp = new Node;
	temp = list_search_node(list, deletion_num);
	list = list->find_predecessor(list, temp);
	list->next = temp->next;
};

int Node::find_maximum(Node *list){
	int max{INT_MIN};
	while(list != nullptr){
		if(list->data > max){
			max = list->data;
		}
		list = list->next;
	}
	return max;
};

int Node::find_minimum(Node *list){
	int min{INT_MAX};
	while(list != nullptr){
		if(list->data < min){
			min = list->data;
		}
		list = list->next;
	}
	return min;
};
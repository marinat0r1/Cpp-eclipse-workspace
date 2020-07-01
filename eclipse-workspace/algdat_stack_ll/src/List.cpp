/*
 * List.cpp
 *
 *  Created on: Jun 15, 2020
 *      Author: Marin
 */

#include "List.h"

List::List() {
	next = nullptr;
	value = 0;

}

List::~List() {
	delete next;
	next = nullptr;
}

	int List::list_head(List* head)
	{
		if(head->next == nullptr){
		cout<<"list empty"<<endl;
		return 0;
		}
		return head->value;
	};

//	List* List::list_tail(List* list)
	//{

	//};

	void List::list_add_front(List* list, int data)
	{
		while(list->next != nullptr){
			list = list->next;
		}
		List* newList = new List();
		list->next = newList;
		newList->value = data;
		newList->next = nullptr;
	};

	void List::list_delete(List* list)
	{
		delete next;
		next = nullptr;
	};

	List* List::find_successor(List* list, List* list_node){
		while(list != list_node->next){
			list = list->next;
		}
		return list;
	}

	List* List:: goto_start(List* list){
		List* node = new List();
		node = list;
		while(node!= nullptr){
			node = find_successor(list, node);
		}
		return node;
	}

	void List::print_linkedlist(List* list){
		//List* node = new List();
		//node = goto_start(list);
		//node = node->next;
		while(list != nullptr){
			cout<<" "<<list->value<<" ";
			list = list->next;
		}
		cout<<"\n"<<endl;
	};

	void List::delete_node(List* list){

	}

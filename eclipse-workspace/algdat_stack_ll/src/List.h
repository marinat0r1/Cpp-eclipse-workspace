/*
 * List.h
 *
 *  Created on: Jun 15, 2020
 *      Author: Marin
 */

#ifndef LIST_H_
#define LIST_H_

#include<iostream>

using namespace std;

class List {
public:
	List();
	virtual ~List();

	List* next;
	int value;


	int list_head(List* list); //Gibt das erste Element der Liste zur�ck
	List* list_tail(List* list); //Gibt die Liste abz�glich des ersten Elementes zur�ck
	void list_add_front(List* list, int data); //F�gt ein neues Element am Kopf der Liste ein
	void list_delete(List* list); //L�scht die Liste
	List* find_successor(List* list, List* list_node);
	void print_linkedlist(List* list);
	List* goto_start(List* list);

};

#endif /* LIST_H_ */

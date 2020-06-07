/*
 * Node.h
 *
 *  Created on: Jun 4, 2020
 *      Author: Marin
 */

#ifndef NODE_H_
#define NODE_H_

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Node {
public:

	Node();
	virtual ~Node();

	int data;
	Node *next;

	//helping methods
	void print_linkedlist(Node* list) const;

	int list_search(Node *list, int item);
	Node* list_search_node(Node *list, int searched_num);
	Node* find_last_node(Node* list_head);

	Node* find_predecessor(Node* list, Node* list_node);
	Node* find_successor(Node* list, Node* list_node);

	void list_insert_first(Node *list_head, Node *insertion_element);

	//functionality
	void list_insert_first_initialize(Node *list_head, int value);
	void list_insert_first_initialize_arr(Node *list_head, int number_of_elements, int arr[]);

	void list_insert_last_initialize(Node *list_head, int value);
	void list_insert_last_initialize_arr(Node *list_head, int number_of_elements, int arr[]);

	void delete_list_element(Node *list, int deletion_num);
	void delete_list_element_new(Node *list, int deletion_num);

	//min max
	int find_maximum(Node *list);
	int find_minimum(Node *list);


};

#endif /* NODE_H_ */

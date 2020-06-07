//============================================================================
// Name        : linked_list_oop.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
#include "Node.h"

using namespace std;

int main() {

	//fix: why doesnt it work with smart pointer??
	//unique_ptr<Node> head(new Node()); // @suppress("Symbol is not resolved") // @suppress("Type cannot be resolved")
	//unique_ptr<Node> first(new Node()); // @suppress("Symbol is not resolved") // @suppress("Type cannot be resolved")
	//unique_ptr<Node> second(new Node()); // @suppress("Type cannot be resolved") // @suppress("Symbol is not resolved")
	//unique_ptr<Node> third(new Node()); // @suppress("Type cannot be resolved") // @suppress("Symbol is not resolved")

	 cout<<"*************** TESTING ***************"<<endl;
	 Node *head = nullptr;
	 Node *first = nullptr;
	 Node *second = nullptr;
	 Node *third = nullptr;

	 head = new Node;
	 first = new Node;
	 second = new Node;
	 third = new Node;

	 head->data = 1;
	 head->next = first;

	 first->data = 2;
	 first->next = second;

	 second->data = 3;
	 second->next = third;

	 third->data = 4;
	 third->next = nullptr;

	 head->print_linkedlist(head);

	 int position = head->list_search(head, 4);

	 cout<<"Pos: "<<position<<"\n"<<endl;

	 Node *test_insertion = nullptr;
	 test_insertion = new Node;
	 test_insertion->data = 27;

	 head->list_insert_first(head, test_insertion);

	 head->print_linkedlist(head);


	 head->delete_list_element(head, 27);

	 head->print_linkedlist(head);

	 delete head;

	 cout<<"\n\n"<<endl;
	 //linked-list with insertion
	 Node *head1 = nullptr;
	 head1 = new Node;

	 head1->list_insert_first_initialize(head1, 1);
	 head1->list_insert_first_initialize(head1, 2);
	 head1->list_insert_first_initialize(head1, 3);
	 head1->list_insert_first_initialize(head1, 4);

	 head1->print_linkedlist(head1);

	 head1->delete_list_element(head1, 3);

	 head1->print_linkedlist(head1);

	 delete head1;
	 cout<<"*************** TESTING OVER ***************"<<endl;

	 cout<<"\n\n"<<endl;
	 //linked-list with multiple insertion
	 Node *head2 = nullptr;
	 head2 = new Node;

	 int arr1[12] ={11,10,9,8,7,6,5,4,3,2,1,0};

	 head2->list_insert_first_initialize_arr(head2, 12, arr1);

	 head2->print_linkedlist(head2);

	 delete head2;


	 cout<<"\n\n"<<endl;
	 //linked-list with multiple insertion
	 Node *head3 = nullptr;
	 head3 = new Node;

	 head3->list_insert_last_initialize_arr(head3, 12, arr1);

	 head3->print_linkedlist(head3);

	 head3->delete_list_element_new(head3, 7);

	 head3->print_linkedlist(head3);

	 cout<<"Max: "<<head3->find_maximum(head3)<<endl;
	 cout<<"Min: "<<head3->find_minimum(head3)<<endl;

	 delete head3;

	 return 0;
}

/*
 * Table.cpp
 *
 *  Created on: Jun 22, 2020
 *      Author: Marin
 */

#include "Table.h"

Table::Table()
: size(0), statetab(nullptr)
{
	statetab = new Node[size];
}

Table::Table(int _size)
: size(_size), statetab(nullptr)
{
	statetab = new Node[size];
}

Table::~Table() {
	// TODO Auto-generated destructor stub
}

int Table::hash_function(int key){
	return key % size;
};

int Table::insert(int value){
	int index = hash_function(value);
	if(statetab[index].key != -1){
		statetab[index].list_insert_first_initialize(&statetab[index], value);
		return -1;
	}
	else{
		Node insert;
		insert.data = value;
		insert.key = index;
		statetab[index] = insert;

		return 0;
	}
};

int Table::search(int value){
	int index = hash_function(value);
	for(int i = 0; i<size; i++){
		if(statetab[i].key == index){
			return 0;
		}
	}
	return -1;
};

int Table::delete_table(int value){
	int index = hash_function(value);
	if(statetab[index].key != -1){
		statetab[index].key = -1;
		statetab[index].data = 0;
		statetab[index]. next = nullptr;
		return 0;
	}
	return -1;
};

void Table::print_table(){
	cout<<"\n";
	for(int i = 0; i<size; i++){
		cout<<i<<": ";
		statetab[i].print_linkedlist(&statetab[i]);
	}
	cout<<"\n"<<endl;

};

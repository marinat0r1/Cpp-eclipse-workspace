/*
 * Table.h
 *
 *  Created on: Jun 22, 2020
 *      Author: Marin
 */

#ifndef TABLE_H_
#define TABLE_H_

#include <iostream>

#include "Node.h"

using namespace std;

class Table {
public:
	Table();
	Table(int _size);
	virtual ~Table();


	int size;
	Node* statetab;

	int hash_function(int key);
	int insert(int value);
	int search(int value);
	int delete_table(int value);
	void print_table();

};

#endif /* TABLE_H_ */

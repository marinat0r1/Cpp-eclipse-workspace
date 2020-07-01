//============================================================================
// Name        : algdat_hashtable.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Table.h"

using namespace std;


int main() {

	/*//TESTING
	Table table1(45);

	int i1 = table1.insert(2);
	int i2 = table1.insert(2);
	int i3 = table1.insert(35);
	int i4 = table1.insert(432);
	int i5 = table1.insert(67);
	int i6 = table1.insert(9);

	cout<<"Inserts: "<<i1<<i2<<i3<<i4<<i5<<i6<<"\n"<<endl;

	table1.print_table();

	int s1 = table1.search(23);
	int s2 = table1.search(2);
	int s3 = table1.search(432);
	int s4 = table1.search(355);

	cout<<"Searches: "<<s1<<s2<<s3<<s4<<"\n"<<endl;

	table1.print_table();

	int d1 = table1.delete_table(3);
	int d2 = table1.delete_table(2);
	int d3 = table1.delete_table(45);
	int d4 = table1.delete_table(9);

	cout<<"Deletes: "<<d1<<d2<<d3<<d4<<"\n"<<endl;

	table1.print_table();
*/

	Table table2(31);

	int collision{0}, collision_counter{0};

	for(int i = 0; i<10000; i++){
		collision = table2.insert(i);
		cout<<collision<<" ";
		if(collision == -1){
			collision_counter++;
		}
	}

	cout<<"\n\ncollisions: "<<collision_counter<<"\n"<<endl;

	table2.print_table();
	//adjust linked_list implementation
	//play around with diff colision workarounds

	return 0;
}

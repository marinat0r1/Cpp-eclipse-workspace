//============================================================================
// Name        : linear_search.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <chrono>
#include "array_functions.h"

using namespace std;
using namespace std::chrono;


int linear_search(int arr[], int key, int size)
{
	for(int j=0;j<size;j++){
		if(key==arr[j]){
			return j;
		}
	}
	return -1;
}

void execute_lsearch(int key, int size)
{
	int* arr = new int[size];
	random_array_fill(arr,size);
	//print_array(arr,size);
	cout<<"\nlinear-search, find " <<key<<" -- Array-size: "<<size<<endl;
	int lsearch = linear_search(arr,key,size);
	if(lsearch == -1){
		cout <<"Value not found"<<endl;
	}
	else{
		cout <<"\n"<<key<<" was found on position: "<<lsearch<<endl;
	}
	delete[] arr;
	arr = nullptr;
}

void execute_lsearch_runtime(int key, int size)
{
	auto start = high_resolution_clock::now();

	execute_lsearch(key,size);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds\n\n" << endl;
    cout<<"-------------------------------------------------------------------\n"<<endl;
}

int main() {

	srand(time(0));
	/*for worst-case select a negative int*/
	int key = rand()%100000;

	execute_lsearch_runtime(key,100);
	execute_lsearch_runtime(key,1000);
	execute_lsearch_runtime(key,10000);
	execute_lsearch_runtime(key,100000);
	execute_lsearch_runtime(key,1000000);
	execute_lsearch_runtime(key,10000000);
	execute_lsearch_runtime(key,100000000);
	execute_lsearch_runtime(key,1000000000);

	return 0;
}

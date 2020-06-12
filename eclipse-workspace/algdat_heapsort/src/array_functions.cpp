/*
 * array_functions.cpp
 *
 *  Created on: May 20, 2020
 *      Author: Marin
 */


#include <iostream>
#include <stdlib.h>
#include "array_functions.h"
#include <cmath>

using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void random_array_fill(int a[], int size)
{
	for(int m=0;m<size;m++)
		{
			a[m] = rand()%100;
		}
}

void print_array(int a[], int length)
{
	cout <<"[ ";
	for(int i=0;i<length;i++){
			cout << a[i]<<" ";
		}
	cout <<"] " << endl;
}

void print_heap(int a[], int length)
{
	int depth = log2(length);
	int k = 0, i = 0;
	cout<<depth<<endl;
	while(i < length){
		for(int j = 0; j < depth; j++){
			cout<<"\t";
		}
		depth--;
		for(int l = 0; l <= k*k; l++){
			cout<<a[i];
			i++;
			cout<<"\t\t";
		}
		cout<<endl;
		k++;
	}

}

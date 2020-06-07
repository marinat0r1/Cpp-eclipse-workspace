/*
 * array_functions.cpp
 *
 *  Created on: May 20, 2020
 *      Author: Marin
 */


#include <iostream>
#include <stdlib.h>
#include "array_functions.h"

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


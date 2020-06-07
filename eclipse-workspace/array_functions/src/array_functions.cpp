//============================================================================
// Name        : array_functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>


void initialize_array(int a[] , int size);
void random_array_fill(int a[], int size);
void print_array(int a[], int length);
void swap(int* a, int* b);

using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void initialize_array(int a[] , int size)
{
	a[size];
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


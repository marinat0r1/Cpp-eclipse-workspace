//============================================================================
// Name        : algdat_quicksort.cpp
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
using namespace std::chrono; // @suppress("Symbol is not resolved")

int partition_test(int arr[], int p, int r, int size)
{
	int x = arr[r]; //pivot
	int i = p-1;
	for(int j = p; j <= r-1; j++)
	{
		if(arr[j] <= x)
		{
			i++;
			swap(&arr[i],&arr[j]);
			print_array(arr,size);
			cout<<"i: "<<i<<"\tj: "<<j<<"\tr: "<<x<<"\n"<<endl;
		}
	}
	swap(&arr[i+1], &arr[r]);

	return (i+1);
}

void quicksort_test(int arr[],int p, int r, int size)
{
	if(p<r)
	{
		 print_array(arr,size);
		 int q = partition_test(arr,p,r, size);
		 quicksort_test(arr,p,q-1, size);
		 quicksort_test(arr,q+1,r, size);
		 print_array(arr,size);
	}
}

void execute_quicksort_test(int size)
{
	int* arr = new int[size];
	random_array_fill(arr,size);
	//print_array(arr,size);
	cout<<"\nquick_sort -- Array-size: "<<size<<" --"<<endl;
	quicksort_test(arr,0,size-1, size);
	cout<<"\n"<<endl;
	delete[] arr;
	arr = nullptr;
}

int partition(int arr[], int p, int r)
{
	int x = arr[r]; //pivot
	int i = p-1;
	for(int j = p; j <= r-1; j++)
	{
		if(arr[j] <= x)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1], &arr[r]);

	return (i+1);
}


void quicksort(int arr[],int p, int r, int size)
{
	if(p<r)
	{
		 int q = partition(arr,p,r);
		 quicksort(arr,p,q-1, size);
		 quicksort(arr,q+1,r, size);
	}
}

void execute_quicksort(int size)
{
	int* arr = new int[size];
	random_array_fill(arr,size);
	//print_array(arr,size);
	cout<<"\nquick_sort -- Array-size: "<<size<<" --"<<endl;
	quicksort(arr,0,size-1, size);
	cout<<"\n"<<endl;
	delete[] arr;
	arr = nullptr;
}

void quicksort_runtime(int size)
{
	auto start = high_resolution_clock::now(); // @suppress("Function cannot be resolved")

	execute_quicksort(size);

	auto stop = high_resolution_clock::now(); // @suppress("Function cannot be resolved")
	auto duration = duration_cast<microseconds>(stop - start); // @suppress("Symbol is not resolved")
    cout << "Time taken by function: " << duration.count() << " microseconds\n\n" << endl; // @suppress("Method cannot be resolved") // @suppress("Invalid overload")
    cout<<"-------------------------------------------------------------------"<<endl;
}

int main() {

	srand(time(0));

	//test
	int arr[9] = {2,1,8,5,4,7,0,3,9};
	quicksort_test(arr,0,8,9);//args:(array,left(0),right(size-1),size


	//BIG ARRAYS
	quicksort_runtime(100);
	quicksort_runtime(1000);
	quicksort_runtime(10000);
	quicksort_runtime(50000);
	quicksort_runtime(100000);
	quicksort_runtime(500000);
	quicksort_runtime(1000000);

	return 0;
}

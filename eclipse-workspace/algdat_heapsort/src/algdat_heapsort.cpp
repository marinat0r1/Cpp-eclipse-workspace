//============================================================================
// Name        : algdat_heapsort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <chrono>

#include "array_functions.h"

using namespace std;
using namespace chrono;

void max_heapify(int arr[], int h, int i){

	int l = (2*i) + 1;
	int r = (2*i) + 2;
	int max{0};

	if(l < h && arr[l] > arr[i]){
		max = l;
	}
	else{
		max = i;
	}

	if(r<h && arr[r] > arr[max]){
		max = r;
	}

	if(max != i){
		swap(arr[i], arr[max]);
		max_heapify(arr,h,max);
	}
}

void build_max_heap(int arr[], int size){

	//int h = *(&arr + 1) - arr;
	for(int i = (size/2); i >= 1; i--){
		max_heapify(arr, size, i-1);
	}
}

void heapsort(int arr[], int size){

	//int h = *(&arr + 1) - arr;
	build_max_heap(arr, size);

	for(int i = size-1; i >= 1; i--){
		swap(arr[0], arr[i]);
		max_heapify(arr, i, 0);
	}
}

void execute_heapsort(int size)
{
	int* arr = new int[size];
	random_array_fill(arr,size);
	//print_array(arr,size);
	cout<<"\nheap_sort -- Array-size: "<<size<<" --"<<endl;
	heapsort(arr, size);
	cout<<"\n"<<endl;
	delete[] arr;
	arr = nullptr;
}

void heapsort_runtime(int size)
{
	auto start = high_resolution_clock::now();

	execute_heapsort(size);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds\n\n" << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
}


int main() {

	int arr[] = {7, 3, 9, 1, 8, 4, 5, 2, 6};

	print_array(arr, 9);

	build_max_heap(arr, 9);

	print_array(arr, 9);

	heapsort(arr, 9);

	print_array(arr, 9);

	//print_heap(test_arr,9);

	return 0;
}

//============================================================================
// Name        : algdat_mergesort.cpp
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
#include "mergesort_gfg.h"

using namespace std;
using namespace std::chrono;


//bislang nur mit geraden arrays
/* *********OWN ATTEMPT TO MERGE-SORT, NEEDS ADJUSTMENT!!!!!!!!!**********
void merge_sort(int arr[], int length)
{
	int n = length;
	if(n >= 1)
	{
		int mid = n/2;
		int left[mid];
		int right[mid];
		cout<<mid<<"\t"<<mid<<endl;
		for(int i=0;i<mid;i++)
		{
			left[i] = arr[i];
		}
		print_array(left,mid);
		for(int i=mid;i<n;i++)
		{
			right[i-mid] = arr[i];
		}
		print_array(right,mid);
		merge_sort(left,mid);
		merge_sort(right,mid);
	//	merge(arr,left,right,mid);
	}
}

void merge(int arr[], int left[], int right[], int mid)
{
	int i{0};
	int j{0};
	int k{0};
	while(mid > 0)
	{
		if(left[i] <= right[j])
		{
			arr[k] = left[i];
			i++;
		}
		else
		{
			arr[k] = right[j];
			j++;
		}
	}

}
*/



void execute_merge_sort(int size)
{
	int* arr = new int[size];
	random_array_fill(arr,size);
	//print_array(arr,size);
	cout<<"\nmerge_sort -- Array-size: "<<size<<" --"<<endl;
	mergeSort(arr,0,size-1);
	cout<<"\n"<<endl;
	delete[] arr;
	arr = nullptr;
}

void merge_sort_runtime(int size)
{
	auto start = high_resolution_clock::now();

	execute_merge_sort(size);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds\n\n" << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
}
int main() {

	srand(time(0));

	int arr[8]={1,56,3,67,5,2,7,12};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	print_array(arr,arr_size);

	mergeSort(arr,0,arr_size-1);

	print_array(arr,arr_size);


	//BIGGER ARRAYS	and RUNTIME

	merge_sort_runtime(100);
	merge_sort_runtime(1000);
	merge_sort_runtime(10000);
	merge_sort_runtime(50000);
	merge_sort_runtime(100000);
	merge_sort_runtime(500000);
	//merge_sort_runtime(1000000);
	//merge_sort_runtime(10000000);
	//merge_sort_runtime(100000000);
	//merge_sort_runtime(1000000000);

	return 0;
}

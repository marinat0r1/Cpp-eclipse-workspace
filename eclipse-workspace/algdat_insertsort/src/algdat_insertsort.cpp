//============================================================================
// Name        : algdat_insertsort.cpp
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


void insertion_sort(int a[], int size)
{
	//print_array(a,size);
	int i{0}, j{0}, key{0};
	for(j=1;j<size;j++){
			key = a[j];
			i = j-1;
			while(i>=0 && a[i] > key){
				a[i+1] = a[i];
				i = i-1;
			}
			a[i+1] = key;
			//print_array(a,size);
		}
	//print_array(a,size);
}

void insertion_sort_viceversa(int a[], int size)
{
	//print_array(a,size);
	int i{0}, j{0}, key{0};
	for(j=size-2;j>=0;j--){
			key = a[j];
			i = j+1;
			while(i<=size-1 && a[i] > key){
				a[i-1] = a[i];
				i = i+1;
			}
			a[i-1] = key;
			//print_array(a,size);
		}
	//print_array(a,size);
}

void insertion_sort_viceversa_simple_v(int a[], int size)
{
	//print_array(a,size);
	int i{0}, j{0}, key{0};
	for(j=1;j<size;j++){
			key = a[j];
			i = j-1;
			while(i>=0 && a[i] < key){
				a[i+1] = a[i];
				i = i-1;
			}
			a[i+1] = key;
			//print_array(a,size);
		}
	//print_array(a,size);
}

void execute_insertion_sort(int size)
{
	int* arr = new int[size];
	random_array_fill(arr,size);
	//print_array(arr,size);
	cout<<"\ninsertion_sort -- Array-size: "<<size<<" --"<<endl;
	insertion_sort(arr,size);
	cout<<"\n"<<endl;
	delete[] arr;
	arr = nullptr;
}

void execute_insertion_sort_viceversa(int size)
{
	int* arr = new int[size];
	random_array_fill(arr,size);
	//print_array(arr,size);
	cout<<"\ninsertion_sort_viceversa -- Array-size: "<<size<<" --"<<endl;
	insertion_sort_viceversa(arr,size);
	cout<<"\n"<<endl;
	delete[] arr;
	arr = nullptr;
}

void execute_insertion_sort_viceversa_simple_v(int size)
{
	int* arr = new int[size];
	random_array_fill(arr,size);
	//print_array(arr,size);
	cout<<"\ninsertion_sort_viceversa_simple_v -- Array-size: "<<size<<" --"<<endl;
	insertion_sort_viceversa_simple_v(arr,size);
	cout<<"\n"<<endl;
	delete[] arr;
	arr = nullptr;
}

void insertion_sort_runtime(int size)
{
	auto start = high_resolution_clock::now();

	execute_insertion_sort(size);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds\n\n" << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
}

void insertion_sort_viceversa_runtime(int size)
{
	auto start = high_resolution_clock::now();

	execute_insertion_sort_viceversa(size);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds\n\n" << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
}

void insertion_sort_viceversa_simple_v_runtime(int size)
{
	auto start = high_resolution_clock::now();

	execute_insertion_sort_viceversa_simple_v(size);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds\n\n" << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
}

int main() {

	srand(time(0));
	//blatt 3 aufgaben 2,3 & 6
	//testing with small arrays
	int a[9] = {3,5,2,6,7,1,0,9,4};

	cout << "insertion_sort\n"<<endl;
	cout << "Array (unsortiert) ";
	print_array(a,9);


	insertion_sort(a,9);

	cout << endl;
	cout << "Array (sortiert) ";
	print_array(a,9);


	int a2[9] = {3,5,2,6,7,1,0,9,4};
	cout << "\n\ninsertion_sort_viceversa\n"<<endl;
	cout << "Array (unsortiert) ";
	print_array(a2,9);

	insertion_sort_viceversa(a2,9);

	cout << "Array (sortiert) ";
	print_array(a2,9);
	cout<<"\n"<<endl;


	int a3[9] = {3,5,2,6,7,1,0,9,4};
	cout << "\n\ninsertion_sort_vice_versa_simple_v\n"<<endl;
	cout << "Array (unsortiert) ";
	print_array(a3,9);

	insertion_sort_viceversa_simple_v(a3,9);

	cout << endl;
	cout << "Array (sortiert) ";
	print_array(a3,9);

	cout<<"\n-----------------------------------------------------------------------------------------------------------------------"<<endl;

	//bigger arrays

	insertion_sort_runtime(10);
	insertion_sort_runtime(50);
	insertion_sort_runtime(100);
	insertion_sort_runtime(500);
	insertion_sort_runtime(1000);
	insertion_sort_runtime(5000);
	insertion_sort_runtime(10000);
	insertion_sort_runtime(50000);
	insertion_sort_runtime(100000);
	insertion_sort_runtime(500000);
	//insertion_sort_runtime(1000000);

	cout<<"\n-----------------------------------------------------------------------------------------------------------------------"<<endl;

	insertion_sort_viceversa_runtime(10);
	insertion_sort_viceversa_runtime(100);
	insertion_sort_viceversa_runtime(1000);
	insertion_sort_viceversa_runtime(10000);
	insertion_sort_viceversa_runtime(100000);
	//insertion_sort_viceversa_runtime(1000000);

	cout<<"\n-----------------------------------------------------------------------------------------------------------------------"<<endl;

	insertion_sort_viceversa_simple_v_runtime(10);
	insertion_sort_viceversa_simple_v_runtime(100);
	insertion_sort_viceversa_simple_v_runtime(1000);
	insertion_sort_viceversa_simple_v_runtime(10000);
	insertion_sort_viceversa_simple_v_runtime(100000);
	//insertion_sort_viceversa_simple_v_runtime(1000000);


	cout<<"\n-----------------------------------------------------------------------------------------------------------------------"<<endl;

	return 0;
}

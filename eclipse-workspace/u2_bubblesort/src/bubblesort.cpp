//============================================================================
// Name        : bubblesort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>

using namespace std;

void initialize_array(int array[] , int size)
{
	array[size];
}

void bubblesort(int a[], int n)
{
	int puffer{0};
	for(int j=0;j<n;j++)
	{
			for(int i =0;i<n-1;i++)
			{
				if(a[i]>a[i+1])
				{
					puffer = a[i];
					a[i] = a[i+1];
					a[i+1] = puffer;

				}
			}
		}
}

void random_array_fill(int a[], int size)
{
	for(int m=0;m<size;m++)
		{
			a[m] = rand()%100;
		}
}

void print_array(int a[], int size)
{
	cout<<"[ ";
	for(int l=0;l<size;l++)
	{
		cout<<a[l]<<" ";
		}
	cout<<"]\n"<<endl;
}

void read_array_size(int save)
{
	cout<<"Array Size: ";
		cin>>save;
		cout<<"\n"<<endl;
}

void execute_bubblesort(int array[], int size)
{
	initialize_array(array,size);

	random_array_fill(array,size);

	print_array(array,size);

	bubblesort(array,size);

	print_array(array,size);
}

int main() {

	int n[]{0};

	execute_bubblesort(n,10);
	execute_bubblesort(n,100);
	//execute_bubblesort(n,1000); //cant
	//execute_bubblesort(n,10000); //cant
	//execute_bubblesort(n,100000);	//cant
	//execute_bubblesort(n,1000000); //cant

	return 0;
}

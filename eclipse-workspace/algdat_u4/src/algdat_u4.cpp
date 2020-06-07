//============================================================================
// Name        : algdat_u4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int x{0},y{0},z{0}, arr[10]={5,1,1,6,89,1,4,1,2,1};

	for(int i=0;i<10;i++){
		x = x+arr[i];
		y=0;
		for(int j=0;j<10;j++){
			y = y+arr[j];
			z=0;
			for(int k=0;k<10;k++){
				z=3;
			}
		}
		x = x+y;
	}

	int alg_foo = x+y+z;

	cout <<alg_foo<< endl;


	x=0;

	for(int i=0;i<10;i++){
			x = x+arr[i];
	}

	int better_foo = 12*x+3;

	cout <<better_foo<< endl;

	return 0;
}

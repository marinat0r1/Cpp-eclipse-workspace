//============================================================================
// Name        : algdat_test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int fibonacci(int n){
	if(n<2) return n;
	else{
		int x = fibonacci(n-1);
		int y = fibonacci(n-2);
		return x+y;
	}
}

int factorial(int n){
	if(n==0) return 1;
	else{
		return n*factorial(n-1);
	}
}

int factorial_iter(int n){
	int k=n,i=1;
	while(k>1){
		i = k*i;
		k = k-1;
	}
	return i;
}

int main() {

	int zahl_fib = fibonacci(3);
	cout << "Fibonacci Zahl: " << zahl_fib << endl;

	int zahl_fac = factorial(5);
	int zahl_fac_iter = factorial_iter(5);

	cout << "Factorial: " << zahl_fac << "\nFactorial_iter: " << zahl_fac_iter << endl;

	return 0;
}

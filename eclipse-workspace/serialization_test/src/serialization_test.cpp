//============================================================================
// Name        : serialization_test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

	ofstream outputFile("data.txt", ios::binary | ios::trunc);
	outputFile <<"Wasssssuup";

	return 0;
}

//============================================================================
// Name        : u4_operatorbaum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Node.h"
#include "Number.h"
#include "OperatorAddition.h"
#include "OperatorSubtraction.h"
#include "OperatorMultiplication.h"
#include "OperatorDivision.h"


int main() {

	// Aufbau des Operatorbaumes für den Ausdruck: 3 * 2 + 4 * 3 / 2
	OperatorAddition *root = new OperatorAddition();

	OperatorMultiplication *root_left = new OperatorMultiplication();

	Number *root_left_left = new Number();
	Number *root_left_right = new Number();

	root_left_left->setValue(3);
	root_left_right->setValue(2);

	root_left->setLeft(root_left_left);
	root_left->setRight(root_left_right);

	OperatorMultiplication *root_right = new OperatorMultiplication();

	Number *root_right_left = new Number();

	OperatorDivision *root_right_right = new OperatorDivision();

	root_right->setLeft(root_right_left);
	root_right->setRight(root_right_right);

	root_right_left->setValue(4);

	Number *root_right_right_left = new Number();
	Number *root_right_right_right = new Number();

	root_right_right_left->setValue(3);
	root_right_right_right->setValue(2);

	root_right_right->setLeft(root_right_right_left);
	root_right_right->setRight(root_right_right_right);

	root->setLeft(root_left);
	root->setRight(root_right);

	// Nun wird der Ausdruck mit Hilfe des Operatorbaumes ausgewertet
	std::cout << "Das Ergebnis des Ausdruckes ist: " << root->getValue()
	<< std::endl;

	// Am Ende noch Löschen des Operatorbaumes
	delete root;
	root = NULL;

	return 0;
}

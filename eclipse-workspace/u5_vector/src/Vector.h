/*
 * Vector.h
 *
 *  Created on: Jun 19, 2020
 *      Author: Marin
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
#include <cmath>

#include "array_functions.h"

using namespace std;

class Vector {
public:
	Vector();
	Vector(int _dimension);
	Vector(const Vector &other);
	virtual ~Vector();

	Vector operator+(const Vector &other)const;
	Vector operator-(const Vector &other)const;
	Vector operator*(const double &other)const;
	Vector& operator=(const Vector &other);
	double operator*(const Vector &other)const;


	int getDimension();

	int getComponent(int index);

	void setComponent(int index, double value);

	void printComponents();

	double getEuclideanLength();

private:
	int dimension;
	double *components;
};

 const Vector operator*( double lhs,  Vector rhs);

#endif /* VECTOR_H_ */
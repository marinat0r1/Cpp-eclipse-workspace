/*
 * Vector.cpp
 *
 *  Created on: Jun 19, 2020
 *      Author: Marin
 */

#include "Vector.h"

	Vector::Vector()
	:dimension(3), components(nullptr)
	{
		components = new double[dimension];
		initialize_array(components, dimension);
	}

	Vector::Vector(int _dimension)
	:dimension(_dimension), components(nullptr)
	{
		components = new double[dimension];
		initialize_array(components, dimension);
	}

	Vector::Vector(const Vector &other)
	:dimension(other.dimension), components(nullptr)
	{
		components = new double[dimension];

		for(int i = 0; i<dimension; i++){
			components[i] = other.components[i];
		}
	};

	Vector::~Vector() {
		delete[] components;
		components = nullptr;
	}

	Vector Vector::operator+(const Vector &other)const{
		Vector result(dimension);
		for(int i = 0; i<dimension; i++){
			result.components[i] = components[i] + other.components[i];
		}
		return result;
	};

	Vector Vector::operator-(const Vector &other)const{
		Vector result(dimension);
		for(int i = 0; i<dimension; i++){
			result.components[i] = components[i] - other.components[i];
		}
		return result;
	};

	Vector Vector::operator*(const double &other)const{
		Vector result(dimension);
		for(int i = 0; i<dimension; i++){
			result.components[i] = components[i] * other;
		}
		return result;
	};

	Vector& Vector::operator=(const Vector &other){
		for(int i = 0; i<dimension; i++){
					components[i] = other.components[i];
				}
		return *this;
	};

	double Vector::operator*(const Vector &other)const{
			double result{0.0}, temp{0.0};
			for(int i = 0; i<dimension; i++){
				temp = components[i] * other.components[i];
				result = result + temp;
			}
			return result;
		};

	 const Vector operator*( double lhs,  Vector rhs){
		return rhs*lhs;
	};


	int Vector::getDimension(){
		return dimension;
	};

	int Vector::getComponent(int index){
		return components[index];
	};

	void Vector::setComponent(int index, double value){
		components[index] = value;
	};

	void Vector::printComponents(){
		cout <<"(  ";
			for(int i=0;i<dimension;i++){
					cout << components[i]<<"  ";
				}
			cout <<")\n" << endl;
	};

	double Vector::getEuclideanLength(){
		double euclideanLength{0.0}, temp{0.0};
		for(int i = 0; i<dimension; i++){
			temp = pow(components[i], 2);
			euclideanLength = euclideanLength + temp;
		}
		return sqrt(euclideanLength);
	};


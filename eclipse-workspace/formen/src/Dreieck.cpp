/*
 * Dreieck.cpp
 *
 *  Created on: May 31, 2020
 *      Author: Marin
 */

#include "Dreieck.h"

Dreieck::Dreieck() {
	seite_a = 0.0;
	seite_b = 0.0;
	seite_c = 0.0;
}

Dreieck::~Dreieck() {
	// TODO Auto-generated destructor stub
}

	//Getter
	double Dreieck::get_seite_a(){
		return seite_a;
	}

	double Dreieck::get_seite_b(){
			return seite_b;
		}

	double Dreieck::get_seite_c(){
			return seite_c;
		}

	//Setter
	void Dreieck::set_seite_a(double _seite_a){
		seite_a = _seite_a;
	}

	void Dreieck::set_seite_a(double _seite_b){
			seite_b = _seite_b;
		}

	void Dreieck::set_seite_a(double _seite_c){
			seite_c = _seite_c;
		}

	//Methods

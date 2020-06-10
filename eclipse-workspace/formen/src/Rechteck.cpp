/*
 * Rechteck.cpp
 *
 *  Created on: May 30, 2020
 *      Author: Marin
 */

#include "Rechteck.h"
#include<math.h>

	Rechteck::Rechteck() {
		seite_a = 0.0;
		seite_b = 0.0;
	}

	Rechteck::~Rechteck() {
		// TODO Auto-generated destructor stub
	}

	//Getter
	double Rechteck::get_seite_a(){
		return seite_a;
	};

	double Rechteck::get_seite_b(){
		return seite_b;
	};

	//Setter
	void Rechteck::set_seite_a(double _seite_a){
		seite_a = _seite_a;
	};

	void Rechteck::set_seite_b(double _seite_b){
		seite_b = _seite_b;
	};

	//Methods

	double Rechteck::umfang(){
		return ((2* seite_a) + (2* seite_b));
	};

	double Rechteck::flaecheninhalt(){
		return (seite_a * seite_b);
	};

	double Rechteck::diagonalenlaenge(){
		return (sqrt((pow(seite_a,2))+(pow(seite_b,2))));
	};

	double Rechteck::umkreisradius(){
		return (Rechteck::diagonalenlaenge()/2);
	};

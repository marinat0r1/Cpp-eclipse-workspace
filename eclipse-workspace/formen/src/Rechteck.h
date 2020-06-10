/*
 * Rechteck.h
 *
 *  Created on: May 30, 2020
 *      Author: Marin
 */

#ifndef RECHTECK_H_
#define RECHTECK_H_

class Rechteck {
public:
	Rechteck();
	~Rechteck();

	//Getter
	double get_seite_a();
	double get_seite_b();

	//Setter
	void set_seite_a(double _seite_a);
	void set_seite_b(double _seite_b);

	//Methods
	double umfang();
	double flaecheninhalt();
	double diagonalenlaenge();
	double umkreisradius();

private:
	double seite_a;
	double seite_b;
};

#endif /* RECHTECK_H_ */

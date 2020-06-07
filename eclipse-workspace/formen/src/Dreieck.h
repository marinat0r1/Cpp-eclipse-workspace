/*
 * Dreieck.h
 *
 *  Created on: May 31, 2020
 *      Author: Marin
 */

#ifndef DREIECK_H_
#define DREIECK_H_

class Dreieck {
public:
	Dreieck();
	~Dreieck();

	//Getter
	double get_seite_a();
	double get_seite_b();
	double get_seite_c();

	//Setter
	void set_seite_a(double _seite_a);
	void set_seite_b(double _seite_b);
	void set_seite_c(double _seite_c);

	//Methods
	double alpha();
	double beta();
	double gamma();

private:
	double seite_a;
	double seite_b;
	double seite_c;
};

#endif /* DREIECK_H_ */

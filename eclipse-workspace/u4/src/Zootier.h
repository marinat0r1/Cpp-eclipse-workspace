/*
 * Zootier.h
 *
 *  Created on: Jun 3, 2020
 *      Author: Marin
 */

#ifndef ZOOTIER_H_
#define ZOOTIER_H_

#include <string>


class Zootier {
public:

	enum GEFAEHRLICHKEIT{SEHR_GEFAEHRLICH, GEFAEHRLICH, UNGEFAEHRLICH};

	Zootier();
	Zootier(double _gewicht, GEFAEHRLICHKEIT _gefahr);
	virtual ~Zootier();

	//Getter
	double getGewicht() const;
	GEFAEHRLICHKEIT getGefaehrlichkeit() const;

	//Setter
	void setGewicht(double _gewicht);
	void setGefaehrlichkeit(GEFAEHRLICHKEIT _gefahr);

	//Methods
	virtual std::string getTierart() = 0;
	std::string getGefaehrlichkeit_string();

protected:
	double gewicht;
	GEFAEHRLICHKEIT gefahr;
};


#endif /* ZOOTIER_H_ */
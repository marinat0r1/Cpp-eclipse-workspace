/*
 * Loewe.h
 *
 *  Created on: Jun 3, 2020
 *      Author: Marin
 */

#ifndef LOEWE_H_
#define LOEWE_H_

#include "Zootier.h"

class Loewe : public Zootier {
public:
	Loewe();
	Loewe(double _gewicht);
	virtual ~Loewe();

	std::string getTierart();
};

#endif /* LOEWE_H_ */

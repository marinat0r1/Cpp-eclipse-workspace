/*
 * Node.h
 *
 *  Created on: Jun 12, 2020
 *      Author: Marin
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node();
	virtual ~Node();

	virtual double getValue() = 0;
};

#endif /* NODE_H_ */

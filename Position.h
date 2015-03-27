/*
 * Position.h
 *
 *  Created on: 13.03.2015
 *      Author: markus
 */

#ifndef POSITION_H_
#define POSITION_H_

#include <string>
#include <sstream>

class Game;

class Position
{
private:
	int x_;
	int y_;

public:
	Position(int x_, int y_);
	virtual ~Position();

	int getX();
	int getY();

	bool parse(std::string input);
	std::string toString();
};

#endif /* POSITION_H_ */

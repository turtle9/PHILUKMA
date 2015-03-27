/*
 * Tile.h
 *
 *  Created on: 13.03.2015
 *      Author: markus
 */

#ifndef TILE_H_
#define TILE_H_

#include "Color.h"

class Tile
{
public:
	enum Type
	{
	  TYPE_CROSS = 1,
		TYPE_CURVE_1 = 2,
	  TYPE_CURVE_2 = 3
	};

	Tile(Type side, Color topcolor);
	virtual ~Tile();

private:
  Type side_;
  Color topcolor_;

};

#endif /* TILE_H_ */

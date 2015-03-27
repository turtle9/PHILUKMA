/*
 * Game.h
 *
 *  Created on: 13.03.2015
 *      Author: markus
 */

#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include <string>

#include "Color.h"
class Tile;

class Game
{
private:
	Color active_player_;
	Tile *starttile_;
	bool running_;

public:
	Game();
	virtual ~Game();

	void setStartTile(Tile &starttile);
	void setRunning(bool running);

	Color getActivePlayer();

	void run();
	void togglePlayer();
};

#endif /* GAME_H_ */

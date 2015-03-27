/*
 * Game.cpp
 *
 *  Created on: 13.03.2015
 *      Author: markus
 */

#include "Game.h"


Game::Game()
{
  active_player_ = COLOR_WHITE;
  starttile_ = NULL;
  running_ = false;
}


Game::~Game()
{

}


void Game::setStartTile(Tile &starttile)
{
	starttile_ = &starttile;
}


void Game::setRunning(bool running)
{
	running_ = running;
}


Color Game::getActivePlayer()
{
	return active_player_;
}


void Game::run()
{
  running_ = true;
  std::string input;

  while(running_)
  {
  	std::cout << "sep> ";
  	std::cin >> input;

  	if(input == "quit")
  	{
      running_ = false;
  	}
  }
}


void Game::togglePlayer()
{
  active_player_ = (active_player_ == COLOR_WHITE) ? COLOR_RED : COLOR_WHITE;
}

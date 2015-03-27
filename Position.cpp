/*
 * Position.cpp
 *
 *  Created on: 13.03.2015
 *      Author: markus
 */

#include "Position.h"

Position::Position(int x, int y) : x_(x), y_(y)
{

}


Position::~Position()
{

}


int Position::getX()
{
	return x_;
}


int Position::getY()
{
	return y_;
}


bool Position::parse(std::string input)
{
  char check;
  std::istringstream read;
  read.str(input);

  read >> check;
  if(check != '(')
  {
  	x_ = 0;
  	y_ = 0;
  	return false;
  }

  read >> x_;

  read >> check;
  if(check != ',')
  {
  	x_ = 0;
  	y_ = 0;
  	return false;
  }

  read >> y_;

  read >> check;
  if(check != ')')
  {
  	x_ = 0;
  	y_ = 0;
  	return false;
  }

  read >> check;
  if(!read.eof())
  {
  	x_ = 0;
  	y_ = 0;
  	return false;
  }

  return true;
}


std::string Position::toString()
{
	std::ostringstream coordinate;
	coordinate << "(" << x_ << "," << y_ << ")";
	return coordinate.str();
}

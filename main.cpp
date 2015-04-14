//------------------------------------------------------------------------------
// main.cpp
//
// Group: Group 43, study assistant: Max Mustertutor
//
// Authors: Super Student 1 (0800001)
// Super Student 2 (0800002)
// Super Student 3 (0800003)
// Super Student 4 (0800004)
//------------------------------------------------------------------------------
//

#include <iostream>
#include <vector>
#include "Game.h"
#include "Position.h"
#include "Color.h"
#include "Tile.h"
 
//------------------------------------------------------------------------------
// main function
// entry point for execution
// @param argc argument count
// @param **argv argument values
// @return return value for the OS
//
int main(int argc, char **argv)
{

    /*Tile tmptile();
    
    std::vector<Tile> tiles;
    
    tiles.push_back(&tmptile);*/
    
    std::vector<int> zahlen;
    int zahl1 = 2;
    int zahl2 = 3;
    int zahl3 = 33;
    
    zahlen.push_back(zahl1);
    zahlen.push_back(zahl2);
    zahlen.push_back(zahl3);
    
    Position pos1(3,4);
    std::vector<Position> posis;
    posis.push_back(pos1);
    
    std::cout << zahlen.at(2) << std::endl;
    std::cout << pos1.getY() << std::endl;
    std::cout << posis.at(0).getY() << std::endl;
    
    Game trax;
    
    trax.run();
    //Philipp
    
    //lubobest
  return 0;
}

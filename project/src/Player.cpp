#include<bits/stdc++.h>
#include "../include/Position.h"
#include "../include/Entity.h"
#include "../include/Player.h"
#include "../include/GameMap.h"
#include<ncurses.h>

using namespace std;

Player::Player() : name("player"){
	this->pos = new position(15,15);
	this->prefferedPos = NULL;
	this->moveMap['w'] = position(0,-1);
	this->moveMap['a'] = position(-1,0);
	this->moveMap['d'] = position(1,0);
	this->moveMap['s'] = position(0,1);
}

Player::Player(GameMap  * gameMapPtr) : Player::Player()
{
	this->gameMap = gameMapPtr;
}

string Player::entityName() {
	return this->name;
}

position Player::decide()
{
	char ch;
	nodelay(stdscr, TRUE);	
	clock_t start = clock();
	do 
	{
          if ((ch = getch()) != ERR)
		  {
			  delete(prefferedPos);
			  position moveVector = this->moveMap[ch];
			  this->prefferedPos = new position(this->pos->x + moveVector.x, this->pos->y + moveVector.y);
			  return moveVector;
          }
    } while(gameMap->moveFrame>=(float)(clock() - start));
	delete(prefferedPos);
	this->prefferedPos = NULL;
	return position(0,0);
}



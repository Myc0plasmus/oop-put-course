#include<bits/stdc++.h>
#include "structs/Position.h"
#include "entities/Entity.h"
#include "entities/Player.h"
#include "GameMap.h"
#include<ncurses.h>

using namespace std;

Player::Player() : gameOver(false){
	this->name = "player";
	this->pos.reset(new position(15,15));
	this->prefferedPos = NULL;
	this->standsOn = NULL;
	this->moveMap['w'] = position(0,-1);
	this->moveMap['a'] = position(-1,0);
	this->moveMap['d'] = position(1,0);
	this->moveMap['s'] = position(0,1);
}

Player::Player(GameMap  * gameMapPtr) : Player::Player()
{
	this->gameMap = gameMapPtr;
}

void Player::decide()
{
	char ch;
	nodelay(stdscr, TRUE);	
	clock_t start = clock();
	do 
	{
		if(this->gameOver) continue;	
		if ((ch = getch()) != ERR)
		{
			if(ch == ':')
			{
				this->gameOver = true;
				continue;
			}
			position moveVector = this->moveMap[ch];
			prefPosApplyVector(moveVector);
			return;
		}
    } while(gameMap->moveFrame>=((float)(clock() - start)/CLOCKS_PER_SEC));
	this->prefferedPos.reset(NULL);
}

bool Player::isGameOver()
{
	return this->gameOver;
}

void Player::setSpawnPoint()
{
	this->gameMap->setEntitySpawnPoint(this->pos.get());
}




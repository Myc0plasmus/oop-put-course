#include<bits/stdc++.h>
#include "../include/Position.h"
#include "../include/Entity.h"
#include "../include/Player.h"
#include "../include/GameMap.h"
#include<ncurses.h>

using namespace std;

Player::Player() : name("player"), gameOver(false){
	this->pos.reset(new position(15,15));
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
    } while(gameMap->moveFrame>=(float)(clock() - start));
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




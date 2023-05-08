#include<bits/stdc++.h>
#include "../include/Player.h"
#include<ncurses.h>

using namespace std;

Player::Player(){
	this->pos->x = 10;
	this->pos->y = 10;
	
	this->moveMap['w'] = position(0,1);
	this->moveMap['a'] = position(-1,0);
	this->moveMap['d'] = position(1,1);
	this->moveMap['s'] = position(0,-1);
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

void GameMap::renderPlane()
{
	//strength threshold
	int strengthVal = 10;

	
	

	for(int i = 0;i<this->mapSize;i++)
	{
		for(int j = 0;j<this->mapSize*2;j++)
		{
			Entity * field = this->plane[i][j];
			if(field == NULL)
			{
				cout<<".";
				continue;
			}
			if(field->entityName()=="prey") 
			{
				// check the strenght of the prey
				continue;
			}
			cout<<this->renderMap[field->entityName()];
		}
		cout<<endl;
	}
	position decision = this->playerPtr->decide();
	this->plane[this->playerPtr->givePosition().x][this->playerPtr->givePosition().y] = NULL;
	this->playerPtr->confirmDecision(true);
	this->plane[this->playerPtr->givePosition().x][this->playerPtr->givePosition().y] = this->playerPtr;
	system("CLS");
}

void GameMap::getPlayer(Player * newPlayerPtr)
{
	this->playerPtr = newPlayerPtr;
	this->plane[this->playerPtr->givePosition().x][this->playerPtr->givePosition().y] = this->playerPtr;
}

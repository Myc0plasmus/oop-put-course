#include<bits/stdc++.h>
#include<ncurses.h>
#include "../include/GameMap.h"
#include "../include/Entity.h"
#include "../include/Player.h"
#include "../include/Wall.h"


using namespace std;

GameMap::GameMap(int size)
{
	this->mapSize = size;
	this->plane = new Entity**[size];
	for(int i =0;i<size;i++) this->plane[i] = new Entity*[size*2];
	for(int i=0;i<size;i++)
	{
		for(int j =0;j<size*2;j++) this->plane[i][j] = NULL;
	}
	this->renderMap["verticalWall"] = '|';	
	this->renderMap["horizontalWall"] = '_';	
	this->renderMap["player"] = 'p';	
	this->renderMap["prey"] = 'o';
	this->renderMap["dead"] = 'x';
}

void GameMap::initPlane()
{
	for(int i = 0;i<this->mapSize;i++)
	{
			Wall * newWall = new Wall(0,i,"horizontalWall");
			this->immobile.push_back(newWall);
			this->plane[0][i] = this->immobile.back();
			newWall = new Wall(2*this->mapSize-1,i,"horizontalWall");
			this->immobile.push_back(newWall);
			this->plane[2*this->mapSize-1][i] = this->immobile.back();
			newWall = new Wall(i,0,"verticalWall");
			this->immobile.push_back(newWall);
			this->plane[i][0] = this->immobile.back();
			newWall = new Wall(i,2*this->mapSize-1,"verticalWall");
			this->immobile.push_back(newWall);
			this->plane[i][2*this->mapSize-1] = this->immobile.back();
	}
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
				mvaddch(i,j,'.');
				continue;
			}
			if(field->entityName()=="prey") 
			{
				// check the strenght of the prey
				continue;
			}
			mvaddch(i,j,renderMap[field->entityName()]);
		}
	}
	position decision = this->playerPtr->decide();
	this->plane[this->playerPtr->givePosition().y][this->playerPtr->givePosition().x] = NULL;
	this->playerPtr->confirmDecision(true);
	this->plane[this->playerPtr->givePosition().y][this->playerPtr->givePosition().x] = this->playerPtr;
	refresh();
}

void GameMap::deleteGameObjects()
{
	for(auto obj : this->immobile)
	{
		if(obj->entityName() == "verticalWall" || obj->entityName() == "horizontalWall")
			delete(static_cast<Wall *>(obj));
	}
}

void GameMap::getPlayer(Player * newPlayerPtr)
{
	this->playerPtr = newPlayerPtr;
	this->plane[this->playerPtr->givePosition().x][this->playerPtr->givePosition().y] = this->playerPtr;
}



//getPlayer is in Player.cpp

//render is also in Player.cpp

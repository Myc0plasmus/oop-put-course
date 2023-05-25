#include<bits/stdc++.h>
#include<ncurses.h>
#include "../include/GameMap.h"
#include "../include/Position.h"
#include "../include/Entity.h"
#include "../include/Player.h"
#include "../include/Wall.h"


using namespace std;

GameMap::GameMap(int size) 
{
	this->mapSize = size;
	this->plane = new Entity** [size];
	for(int i =0;i<size;i++) this->plane[i] = new Entity*[size*2];
	for(int i=0;i<size;i++)
	{
		for(int j =0;j<size*2;j++) this->plane[i][j] = NULL;
	}
	this->renderMap["verticalWall"] = '|';	
	this->renderMap["horizontalWall"] = '_';	
	this->renderMap["Wall"] = '#';	
	this->renderMap["player"] = 'p';	
	this->renderMap["prey"] = 'o';
	this->renderMap["dead"] = 'x';
	 
}

Entity * GameMap::getEntityOnPos(position pos)
{
	return this->plane[pos.y][pos.x];
}

Entity * GameMap::getEntityOnCoords(int x, int y)
{
	return this->plane[y][x];
}

void GameMap::assignEntityOnPos(Entity * entity, position pos)
{
	this->plane[pos.y][pos.x] = entity;
}

void GameMap::assignEntityOnCoords(Entity * entity, int x, int y)
{
	this->plane[y][x] = entity;
}

void GameMap::moveEntity(Entity * ent)
{
	position start = ent->givePosition();
	position end = ent->givePrefferedPosition();
	plane[start.y][start.x] = NULL;
	plane[end.y][end.x] = ent;
	mvaddch(start.y,start.x,'.');
	if(ent->entityName()=="prey") 
			{
				// check the strenght of the prey
				return;
			}
	mvaddch(end.y,end.x,renderMap[ent->entityName()]);
}



void GameMap::initPlane()
{
	for(int i = 0;i<this->mapSize*2;i++)
	{
			
			this->immobile.push_back(shared_ptr<Entity>(new Wall(0,i)));
			this->plane[0][i]=this->immobile.back().get();
			this->immobile.push_back(shared_ptr<Entity>(new Wall(this->mapSize-1,i)));
			this->plane[this->mapSize-1][i] = this->immobile.back().get();
	}
	for(int i =0;i<this->mapSize;i++)
	{
			
			this->immobile.push_back(shared_ptr<Entity>(new Wall(i,0)));
			this->plane[i][0] = this->immobile.back().get();
			this->immobile.push_back(shared_ptr<Entity>(new Wall(i,2*this->mapSize-1)));
			this->plane[i][2*this->mapSize-1] = this->immobile.back().get();
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
	
	refresh();
}

void GameMap::refreshPlane()
{
	for(auto entity : mobile)
		{
			entity->decide();
			Entity * entityOnPrefferedPos = this->getEntityOnPos(entity->givePrefferedPosition());
			if(entity->givePrefferedPosition() != entity->givePosition() && (entityOnPrefferedPos == NULL || (entityOnPrefferedPos != NULL && entityOnPrefferedPos->entityName() != "Wall")) )
			{
				this->moveEntity(entity.get());
				entity->confirmDecision(true);
				refresh();
			}
		}
}

void GameMap::getPlayer(Player * newPlayerPtr)
{
	this->playerPtr = newPlayerPtr;
	mobile.push_back(shared_ptr<Entity>(this->playerPtr));
	this->plane[this->playerPtr->givePosition().x][this->playerPtr->givePosition().y] = this->playerPtr;
}



//getPlayer is in Player.cpp

//render is also in Player.cpp

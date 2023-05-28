#include<bits/stdc++.h>
#include <curses.h>
#include<ncurses.h>
#include "GameMap.h"
#include "structs/Position.h"
#include "entities/Entity.h"
#include "entities/Player.h"
#include "entities/Wall.h"
#include "entities/Prey.h"
#include "entities/Corpse.h"


using namespace std;

GameMap::GameMap(int size) 
{
	this->mapSize = size;
	
	this->primalWall = make_unique<Wall>();
	this->primalCorpse = make_unique<Corpse>();
	this->renderMap["verticalWall"] = '|';	
	this->renderMap["horizontalWall"] = '_';	
	this->renderMap["Wall"] = '#';	
	this->renderMap["player"] = 'p';	
	this->renderMap["prey"] = 'o';
	this->renderMap["corpse"] = 'x';

	//map generation
	this->fillprob = 40;
	this->size_x = 2*size;
	this->size_y = size;
	this->generations = 1;
	this->params_set = unique_ptr<generation_params[]>(new generation_params[1]);
	this->params_set[0].reps = 5;
	this->params_set[0].r1_cutoff = 5;
	this->params_set[0].r2_cutoff = 2;

	//plane initialization
	this->plane = new Entity** [size_y];
	for(int i =0;i<size_y;i++) this->plane[i] = new Entity*[size_x];
	for(int i=0;i<size_y;i++)
	{
		for(int j =0;j<size_x;j++) this->plane[i][j] = NULL;
	}
}

GameMap::GameMap(int size, int nfillprob, int ngen, generation_params * nparams_set) : GameMap::GameMap(size)
{
	this->fillprob = nfillprob;
	this->generations = ngen;
	this->params_set.reset(nparams_set);
}

GameMap::~GameMap()
{
	for(int i =0;i<size_y;i++) delete[] this->plane[i];
	delete [] this->plane;
	for(auto entity : mobile) delete(entity);
}

void GameMap::setEntitySpawnPoint(position * pos)
{
	while(this->getEntityOnPos(*pos) != NULL)
	{
		pos->x = rand() % this->size_x;
		pos->y = rand() % this->size_y;
	}
}

position GameMap::generateEntitySpawnPoint()
{
	position newSpawnPoint(0,0); 
	while(this->getEntityOnPos(newSpawnPoint) != NULL)
	{
		newSpawnPoint.x = rand() % this->size_x;
		newSpawnPoint.y = rand() % this->size_y;
	}
	return newSpawnPoint;
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
	this->plane[start.y][start.x] = ent->stepOffSomething();
	ent->stepOnSomething(this->getEntityOnPos(end));
	this->plane[end.y][end.x] = ent;
	mvaddch(start.y,start.x,(this->getEntityOnPos(start) == NULL)?'.':this->renderMap[this->getEntityOnPos(start)->entityName()]);
	// if(ent->entityName()=="prey") 
	// {
	// 	// check the strenght of the prey
	// 	return;
	// }
	mvaddch(end.y,end.x,renderMap[ent->entityName()]);
}


Entity * GameMap::randpick(void)
{
	if(rand()%100 < this->fillprob)
		return this->primalWall.get();
	else
		return NULL;
}


 void GameMap::CellularAutomataGenerator(generation_params * params)
 {
	Entity *** plane2 = new Entity** [size_y];
	for(int i =0;i<size_y;i++) plane2[i] = new Entity*[size_x];
	for(int i=0;i<size_y;i++)
		for(int j =0;j<size_x;j++) plane2[i][j] = primalWall.get();
	
	int xi, yi, ii, jj;
	
	for(yi=1; yi<size_y-1; yi++)
	for(xi=1; xi<size_x-1; xi++)
 	{
 		int adjcount_r1 = 0,
 		    adjcount_r2 = 0;
 		
 		for(ii=-1; ii<=1; ii++)
		for(jj=-1; jj<=1; jj++)
 		{
 			if(plane[yi+ii][xi+jj] != NULL)
 				adjcount_r1++;
 		}
 		for(ii=yi-2; ii<=yi+2; ii++)
 		for(jj=xi-2; jj<=xi+2; jj++)
 		{
 			if(abs(ii-yi)==2 && abs(jj-xi)==2)
 				continue;
 			if(ii<0 || jj<0 || ii>=size_y || jj>=size_x)
 				continue;
 			if(plane[ii][jj] != NULL)
 				adjcount_r2++;
 		}
 		if(adjcount_r1 >= params->r1_cutoff || adjcount_r2 <= params->r2_cutoff)
 			plane2[yi][xi] = this->primalWall.get();
 		else
 			plane2[yi][xi] = NULL;
 	}
 	for(yi=1; yi<size_y-1; yi++)
 	for(xi=1; xi<size_x-1; xi++)
 		plane[yi][xi] = plane2[yi][xi];

	for(int i =0;i<size_y;i++) delete[] plane2[i];
	delete [] plane2;
 } 

void GameMap::initPlane()
{
	for(int yi = 0;yi<this->size_y;yi++)
		for(int xi = 0;xi<this->size_x;xi++)
			plane[yi][xi] = this->randpick();

	for(int i = 0;i<this->size_x;i++)
		this->plane[0][i] = this->plane[this->size_y-1][i] = this->primalWall.get();
	
	// this->immobile.push_back(shared_ptr<Entity>(new Wall(0,i)));
			
	for(int i =0;i<this->size_y;i++)
			this->plane[i][0] =	this->plane[i][this->size_x-1] = this->primalWall.get();
	
	for(int generation = 0;generation<this->generations;generation++)
	{
		for(int i =0;i<this->params_set[generation].reps;i++)
		{
			this->CellularAutomataGenerator(this->params_set.get()+generation);
		}
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
			// if(field->entityName()=="prey") 
			// {
			// 	// check the strenght of the prey
			// 	continue;
			// }
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
			if(entity->givePrefferedPosition() != entity->givePosition() && (entityOnPrefferedPos == NULL 
						|| entityOnPrefferedPos->entityName() == "corpse"
						) )
			{
				this->moveEntity(entity);
				entity->confirmDecision(true);
				refresh();
			}
		}
}

void GameMap::spawnPlayer(Player * newPlayerPtr)
{
	this->playerPtr = newPlayerPtr;
	mobile.push_back(this->playerPtr);
	this->playerPtr->setSpawnPoint();
	this->assignEntityOnPos(playerPtr, playerPtr->givePosition());
}

void GameMap::spawnPrey(int numOfPrey)
{
	for(int i =0;i<numOfPrey;i++)
	{
		Prey * newPrey = new Prey(this);
		this->mobile.push_back(newPrey);
		newPrey->setSpawnPoint();
		this->assignEntityOnPos(newPrey, newPrey->givePosition());
	}
}

void GameMap::spawnCorpses(int numOfCorpses)
{
	for(int i =0;i<numOfCorpses;i++)
		this->assignEntityOnPos(this->primalCorpse.get(),this->generateEntitySpawnPoint());
}



//getPlayer is in Player.cpp

//render is also in Player.cpp

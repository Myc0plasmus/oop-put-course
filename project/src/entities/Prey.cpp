#include <bits/stdc++.h>
#include "structs/Position.h"
#include "entities/Entity.h" 
#include "GameMap.h"
#include "entities/Prey.h"


using namespace std;


Prey::Prey(GameMap * gameMapPtr) 
{
	this->name = "prey";
	this->pos = make_unique<position>(0,0);
	this->prefferedPos = NULL;
	this->gameMap = gameMapPtr;	
}


void Prey::decide()
{
	clock_t current = clock();
	if(this->cooldown !=0 && this->gameMap->moveFrame > ((float)(current-this->cooldown) / CLOCKS_PER_SEC) )
	{
		this->prefferedPos.reset(NULL);
		return;
	}
	this->cooldown = clock();
	position moveVector(0,0);	
	int choice[] = {-1,0,1};
	moveVector.x = choice[rand() % 3];
	if(!moveVector.x) moveVector.y = choice[rand() % 3];
	else moveVector.y = 0;
	if(moveVector == position(0,0)) 
	{
		this->prefferedPos.reset(NULL);
		return;
	}
	this->prefPosApplyVector(moveVector);
}

void Prey::setSpawnPoint()
{
	this->gameMap->setEntitySpawnPoint(this->pos.get());
}

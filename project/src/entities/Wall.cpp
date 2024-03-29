#include<bits/stdc++.h>
#include "structs/Position.h"
#include "entities/Entity.h"
#include "entities/Wall.h"

using namespace std;

Wall::Wall() 
{
	// assert(this->name == "verticalWall" || this->name == "horizontalWall");
	this->name = "Wall";
	this->pos.reset(new position());
	this->prefferedPos = NULL;
}

Wall::Wall(int x,int y) : Wall::Wall()
{
	this->pos->x = x;
	this->pos->y = y;
}

Wall::Wall(position newpos) : Wall::Wall()
{
	this->pos->x = newpos.x;
	this->pos->y = newpos.y;
}

Wall::Wall(position * newpos) : Wall::Wall()
{
	this->pos->x = newpos->x;
	this->pos->y = newpos->y;
}


void Wall::decide()
{
	prefferedPos.reset(NULL);
}

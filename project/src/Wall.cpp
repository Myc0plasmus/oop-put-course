#include<bits/stdc++.h>
#include "../include/Position.h"
#include "../include/Entity.h"
#include "../include/Wall.h"

using namespace std;

Wall::Wall(string type) : name(type)
{
	assert(this->name == "verticalWall" || this->name == "horizontalWall");
	this->pos = new position();
	this->prefferedPos = NULL;
}

Wall::Wall(int x,int y, string type) : Wall::Wall(type)
{
	this->pos->x = x;
	this->pos->y = y;
}

Wall::Wall(position newpos, string type) : Wall::Wall(type)
{
	this->pos->x = newpos.x;
	this->pos->y = newpos.y;
}

Wall::Wall(position * newpos, string type) : Wall::Wall(type)
{
	this->pos->x = newpos->x;
	this->pos->y = newpos->y;
}

string Wall::entityName()
{
	return this->name;
}

position Wall::decide()
{
	return position(0,0);
}

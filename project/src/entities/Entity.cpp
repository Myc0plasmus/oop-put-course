#include<bits/stdc++.h>
#include "structs/Position.h"
#include "entities/Entity.h"
#include "GameMap.h"

using namespace std;

position Entity::givePosition()
{
	if(this->pos == NULL) this->pos=make_unique<position>(0,0);
	return *(pos.get());
}
position Entity::givePrefferedPosition()
{
	if (prefferedPos == NULL) return *(pos.get());
	return *(prefferedPos.get());
}
void Entity::prefPosApplyVector(position vec)
{
	if(this->prefferedPos == NULL)
	{
		this->prefferedPos = make_unique<position>(this->pos->x + vec.x, this->pos->y + vec.y);
	}
	this->prefferedPos->x = this->pos->x + vec.x;
	this->prefferedPos->y = this->pos->y + vec.y;
}

void Entity::confirmDecision(bool confirmation){
	if(!confirmation || this->prefferedPos == NULL) 
	{
		if(prefferedPos != NULL) prefferedPos.reset(NULL);
		return;
	}
	this->pos.reset(this->prefferedPos.release());
	this->prefferedPos = NULL;
}

string Entity::entityName()
{
	return this->name;
}

void Entity::stepOnSomething(Entity * entity)
{
	if(entity == NULL) return;
	this->standsOn = entity;
}

Entity * Entity::stepOffSomething()
{
	Entity * res = this->standsOn;
	if(this->standsOn != NULL) this->standsOn = NULL;
	return res;
}

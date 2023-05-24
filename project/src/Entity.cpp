#include<bits/stdc++.h>
#include "../include/Position.h"
#include "../include/Entity.h"

using namespace std;

position Entity::givePosition()
{
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


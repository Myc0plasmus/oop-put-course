#include<bits/stdc++.h>
#include "../include/Entity.h"

using namespace std;

position Entity::givePosition()
{
	position temp_pos(this->pos);
	return temp_pos;
}

void Entity::confirmDecision(bool confirmation){
	if(!confirmation) return;
	delete(this->pos);
	this->pos = new position(prefferedPos);
	delete(this->prefferedPos);
	this->prefferedPos = NULL;
}

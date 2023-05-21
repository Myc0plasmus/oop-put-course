#pragma once
#include<bits/stdc++.h>
#include "Position.h"

using namespace std;



class Entity{
	protected:
		position * pos;
		position * prefferedPos;
// strength
// health
// maybe speed
	public:
		Entity(){}
		virtual string entityName()=0;

		position givePosition();
		
		//method that is supposed to return the changes to entity's coordinates, that will be applied in form of a mathematical vector
		virtual position decide()=0;
		void confirmDecision(bool confirmation);


};



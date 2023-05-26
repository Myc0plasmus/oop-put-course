#pragma once
#include<bits/stdc++.h>
#include "Position.h"

using namespace std;


class Entity{
	protected:
		unique_ptr<position> pos;
		unique_ptr<position> prefferedPos;
// strength
// health
// maybe speed
		void prefPosApplyVector(position vec);
		
	public:
		Entity(){}
		virtual ~Entity()=default;
		virtual string entityName()=0;

		position givePosition();
		position givePrefferedPosition();
		
		//method that is supposed to return the changes to entity's coordinates, that will be applied in form of a mathematical vector
		virtual void decide()=0;
		void confirmDecision(bool confirmation);
		virtual void setSpawnPoint(){}
};



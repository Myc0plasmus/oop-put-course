#pragma once
#include<bits/stdc++.h>
#include "Position.h"
#include "Entity.h"
#include "GameMap.h"

using namespace std;


class GameMap;

class Prey : public Entity
{
	private:
		clock_t cooldown;
		string name;
		GameMap * gameMap;	
	public:
		Prey(GameMap * gameMapPtr);
		virtual string entityName() override;
		virtual void decide() override;
		virtual void setSpawnPoint() override;
};

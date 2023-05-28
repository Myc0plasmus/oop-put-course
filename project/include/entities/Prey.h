#pragma once
#include<bits/stdc++.h>
#include "structs/Position.h"
#include "Entity.h"
#include "GameMap.h"

using namespace std;


class GameMap;

class Prey : public Entity
{
	private:
		clock_t cooldown;
		GameMap * gameMap;	
	public:
		Prey(GameMap * gameMapPtr);
		virtual void decide() override;
		virtual void setSpawnPoint() override;
};

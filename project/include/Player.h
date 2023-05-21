#pragma once
#include<bits/stdc++.h>
#include "GameMap.h"
#include "Entity.h"

using namespace std;

class GameMap;

class Player : public Entity{
	private:
		const string name;
		map<char,position> moveMap;
		GameMap * gameMap;
	public:
		Player();
		Player(GameMap * gameMapPtr);
		virtual string entityName() override;
		virtual position decide() override;
};

#pragma once
#include<bits/stdc++.h>
#include "GameMap.h"
#include "Entity.h"

using namespace std;

class GameMap;


class Player : public Entity{
	private:
		const string name;
		bool gameOver;
		map<char,position> moveMap;
		GameMap * gameMap;
	public:
		Player();
		Player(GameMap * gameMapPtr);
		bool isGameOver();
		virtual string entityName() override;
		virtual void decide() override;
		virtual void setSpawnPoint() override;
};

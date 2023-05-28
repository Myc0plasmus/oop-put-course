#pragma once
#include<bits/stdc++.h>
#include "GameMap.h"
#include "Entity.h"

using namespace std;

class GameMap;


class Player : public Entity{
	private:
		bool gameOver;
		map<char,position> moveMap;
		GameMap * gameMap;
	public:
		Player();
		Player(GameMap * gameMapPtr);
		bool isGameOver();
		virtual void decide() override;
		virtual void setSpawnPoint() override;
};

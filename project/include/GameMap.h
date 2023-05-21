#pragma once
#include<bits/stdc++.h>
#include "Position.h"
#include "Entity.h"
#include "Player.h"

class Player;

class GameMap{
	private:
		int mapSize;
		map<string,char> renderMap;
		Player * playerPtr;	
	public:
		const float moveFrame = 0.5;
		Entity *** plane;
		GameMap(int size);
		void renderPlane();
		void refreshPlane();
		void getPlayer(Player * newPlayerPtr);
};

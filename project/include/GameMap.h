#pragma once
#include<bits/stdc++.h>
#include "Position.h"
#include "Entity.h"
#include "Player.h"
#include "Wall.h"

class Player;

class GameMap{
	private:
		int mapSize;
		map<string,char> renderMap;
		Player * playerPtr;	
		vector<shared_ptr<Entity>> immobile; 	
		Entity * getEntityOnPos(position pos);
		void moveEntity(Entity * ent);

	public:
		const float moveFrame = 0.5;
		Entity *** plane;
		GameMap(int size);

		//map generation
		void initPlane();

		//first display
		void renderPlane();

		//updating changes
		void refreshPlane();

		//clear the memory
		void getPlayer(Player * newPlayerPtr);
};

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
		vector<shared_ptr<Entity>> mobile;
		void moveEntity(Entity * ent);
		void assignEntityOnPos(Entity * entity,position pos);
		void assignEntityOnCoords(Entity * entity,int x, int y);
		

	public:
		const float moveFrame = 0.5;
		Entity *** plane;
		GameMap(int size);


		Entity * getEntityOnPos(position pos);
		Entity * getEntityOnCoords(int x, int y);

		//map generation
		void initPlane();

		//first display
		void renderPlane();

		//updating changes
		void refreshPlane();

		//clear the memory
		void getPlayer(Player * newPlayerPtr);
};

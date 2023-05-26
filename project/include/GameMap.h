#pragma once
#include<bits/stdc++.h>
#include "Position.h"
#include "Entity.h"
#include "Player.h"
#include "Wall.h"
#include "GenerationParams.h"

class Player;

class GameMap{
	private:
		int mapSize;
		map<string,char> renderMap;
		Player * playerPtr;	
		unique_ptr<Wall>primalWall;
		vector<shared_ptr<Entity>> mobile;
		void moveEntity(Entity * ent);
		void assignEntityOnPos(Entity * entity,position pos);
		void assignEntityOnCoords(Entity * entity,int x, int y);

		// cellular automata params;
		int fillprob;
		int size_x;
		int size_y;
		unique_ptr<generation_params[]> params_set;		
		int generations;
		void randpick();
		void CellularAutomataGenerator();
		

	public:
		const float moveFrame = 0.5;
		Entity *** plane;
		GameMap(int size);
		GameMap(int size, int nfillprob, int ngen, generation_params* nparams_set );


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

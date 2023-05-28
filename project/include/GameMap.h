#pragma once
#include<bits/stdc++.h>
#include "structs/Position.h"
#include "entities/Entity.h"
#include "entities/Player.h"
#include "entities/Wall.h"
#include "structs/GenerationParams.h"
#include "entities/Prey.h"
#include "entities/Corpse.h"

class Player;

class GameMap{
	private:
		int mapSize;
		map<string,char> renderMap;
		Player * playerPtr;	
		unique_ptr<Wall>primalWall;
		unique_ptr<Corpse> primalCorpse;
		vector<Entity *> mobile;
		void moveEntity(Entity * ent);
		void assignEntityOnPos(Entity * entity,position pos);
		void assignEntityOnCoords(Entity * entity,int x, int y);
		void setSpawnPoint(Entity * entity);

		// cellular automata params;
		int fillprob;
		int size_x;
		int size_y;
		unique_ptr<generation_params[]> params_set;		
		int generations;
		Entity * randpick();
		void CellularAutomataGenerator(generation_params * params);
		

	public:
		const float moveFrame = 0.25;
		Entity *** plane;
		GameMap(int size);
		GameMap(int size, int nfillprob, int ngen, generation_params* nparams_set );
		~GameMap();

		Entity * getEntityOnPos(position pos);
		Entity * getEntityOnCoords(int x, int y);
		void setEntitySpawnPoint(position * pos);
		position generateEntitySpawnPoint();

		//map generation
		void initPlane();

		//first display
		void renderPlane();

		//updating changes
		void refreshPlane();

		//clear the memory
		void wipeEnitities();

		//spawns player and assigns it to playerPtr
		void spawnPlayer(Player * newPlayerPtr);

		//spawns prey!!!
		void spawnPrey(int numOfPrey);  

		// for debug purposes
		void spawnCorpses(int numOfCorpses);


};

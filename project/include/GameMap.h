#include<bits/stdc++.h>
#include "Entity.h"

using namespace std;

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
		void getPlayer(Player * newPlayerPtr);
};

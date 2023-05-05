#include<bits/stdc++.h>
#include "Entity.h"

using namespace std;

class GameMap{
	private:
		int mapSize;
		map<string,char> renderMap;
	public:
		Entity *** plane;
		GameMap(int size);
		void renderPlane();

		 
};

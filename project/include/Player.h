#include<bits/stdc++.h>
#include "GameMap.h"

using namespace std;

class Player : public Entity{
	private:
		static string name;
		map<char,position> moveMap;
		GameMap * gameMap;
	public:
		Player();
		Player(GameMap * gameMapPtr);
		virtual string entityName() override;
		virtual position decide() override;
};

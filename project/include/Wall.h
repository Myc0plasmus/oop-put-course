#pragma once
#include<bits/stdc++.h>
#include "Position.h"
#include "Entity.h"

using namespace std;

class Wall : public Entity 
{
	private:
		const string name;
	public:
		Wall(string type);
		Wall(int x, int y, string type);
		Wall(position newpos, string type);
		Wall(position * newpos, string type);
		string entityName() override;
		void decide() override;
		
};

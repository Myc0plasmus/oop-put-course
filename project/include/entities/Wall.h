#pragma once
#include<bits/stdc++.h>
#include "structs/Position.h"
#include "Entity.h"

using namespace std;

class Wall : public Entity 
{
	private:
		const string name;
	public:
		Wall();
		Wall(int x, int y);
		Wall(position newpos);
		Wall(position * newpos);
		string entityName() override;
		void decide() override;
		
};

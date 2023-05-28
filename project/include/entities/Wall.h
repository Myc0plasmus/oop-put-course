#pragma once
#include<bits/stdc++.h>
#include "structs/Position.h"
#include "Entity.h"

using namespace std;

class Wall : public Entity 
{
	private:
	public:
		Wall();
		Wall(int x, int y);
		Wall(position newpos);
		Wall(position * newpos);
		void decide() override;
		
};

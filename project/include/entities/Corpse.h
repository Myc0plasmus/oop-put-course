#pragma once
#include <bits/stdc++.h>
#include "structs/Position.h"
#include "Entity.h"

using namespace std;

class Corpse : public Entity
{
	private:
	public:
		Corpse();
		void decide() override;

};


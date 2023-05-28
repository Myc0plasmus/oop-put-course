#include <bits/stdc++.h>
#include "structs/Position.h"
#include "entities/Entity.h"
#include "entities/Corpse.h"

using namespace std;

Corpse::Corpse()
{
	this->name = "corpse";
}
void Corpse::decide()
{
	prefferedPos.reset(NULL);
}

#include<bits/stdc++.h>
#include "include/Player.h"

using namespace std;

string Player::name="player";
int main()
{
	GameMap gmap(50);
	Player player(&gmap);		
	gmap.getPlayer(&player);
	while(true) gmap.renderPlane();
}

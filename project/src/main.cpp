#include<bits/stdc++.h>
#include "structs/Position.h"
#include "entities/Entity.h"
#include "entities/Player.h"
#include "GameMap.h"
#include "entities/Wall.h"
#include "entities/Prey.h"
#include<ncurses.h>

using namespace std;

int main()
{
	srand(time(0));
	initscr();
	curs_set(0);
	noecho();
	GameMap gmap(40);
	Player * player = new Player(&gmap);		
	gmap.initPlane();
	gmap.spawnPlayer(player);
	gmap.spawnPrey(5);
	gmap.renderPlane();
	while(!player->isGameOver()) gmap.refreshPlane();
	endwin();
}

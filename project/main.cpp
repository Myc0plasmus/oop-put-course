#include<bits/stdc++.h>
#include "include/Position.h"
#include "include/Entity.h"
#include "include/Player.h"
#include "include/GameMap.h"
#include "include/Wall.h"
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
	gmap.renderPlane();
	while(!player->isGameOver()) gmap.refreshPlane();
	endwin();
}

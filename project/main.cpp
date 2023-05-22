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
	initscr();
	curs_set(0);
	noecho();
	GameMap gmap(20);
	Player player(&gmap);		
	gmap.getPlayer(&player);
	gmap.initPlane();
	while(true) gmap.renderPlane();
	gmap.deleteGameObjects();
	endwin();
}

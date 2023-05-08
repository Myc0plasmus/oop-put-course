#include<bits/stdc++.h>
#include "../include/GameMap.h"


using namespace std;

GameMap::GameMap(int size)
{
	this->mapSize = size;
	this->plane = new Entity**[size];
	for(int i =0;i<size;i++) this->plane[i] = new Entity*[size*2];
	for(int i=0;i<size;i++)
	{
		for(int j =0;j<size*2;j++) this->plane[i][j] = NULL;
	}
	this->renderMap["verticalWall"] = '|';	
	this->renderMap["horizontalWall"] = '_';	
	this->renderMap["player"] = 'p';	
	this->renderMap["prey"] = 'o';
	this->renderMap["dead"] = 'x';
}



//getPlayer is in Player.cpp

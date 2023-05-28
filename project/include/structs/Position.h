#pragma once
#include<bits/stdc++.h>

typedef struct position{
	int x;
	int y;
	position(int new_x,int new_y) : x(new_x), y(new_y){} 
	position() : x(0), y(0){}
	position(struct position * newpos){
		x = newpos->x;
		y = newpos->y;
	}
	inline bool operator==( const position& rhs)
	{
		if(this->x == rhs.x && this->y == rhs.y) return true;
		return false;
	}
	inline bool operator!=(const position& rhs)
	{
		return !(*this == rhs);
	}

}position;

#include<bits/stdc++.h>

using namespace std;

typedef struct position{
	int x;
	int y;
	position(int &new_x,int &new_y) : x(new_x), y(new_y){} 
	position() : x(0), y(0){}
	position(struct position * newpos){
		x = newpos->x;
		y = newpos->y;
	}

}position;

class Entity{
	protected:
		position * pos;
		position * prefferedPos;
// strength
// health
// maybe speed
	public:
		Entity(){}
		virtual string entityName()const=0;

		position givePosition();
		
		//method that is supposed to return the changes to entity's coordinates, that will be applied in form of a mathematical vector
		virtual position decide()const=0;
		void confirmDecision(bool confirmation);


};



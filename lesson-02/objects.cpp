#include<bits/stdc++.h>

using namespace std;

class point{
	public:
		int x;
		int y;
};
class line{
	public:
		point p1;
		point p2;
};

int main()
{
	line myline;
	myline.p1.x=1;
	myline.p1.y = 2;
	myline.p2.x = 2; 
	myline.p2.y = 1;
	cout<<myline.p1.x<<" "<<myline.p1.y<<" "<<myline.p2.x<<" "<<myline.p2.y;


}


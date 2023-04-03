#include<bits/stdc++.h>

using namespace std;

class Person
{
	public:
		Person(){}
		virtual Person * changeId(int newid)  =0;
		virtual string giveId() = 0;
};

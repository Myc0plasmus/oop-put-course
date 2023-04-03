#include<bits/stdc++.h>
#include "person.h"

using namespace std;

class Employee : Person
{
	public:
		Employee(int newid);
		virtual Employee * changeId(int newid) override;
		virtual string giveId() override;
	private:
		int id;
};


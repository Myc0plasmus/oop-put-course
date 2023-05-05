#include<bits/stdc++.h>
#include "employee.h"

using namespace std;

Employee::Employee(int newid) {this->id = newid;}

Employee * Employee::changeId(int newid) 
{
	Employee * a = new Employee(newid);
	return a;
}

string Employee::giveId()
{
	return to_string(this->id);
}


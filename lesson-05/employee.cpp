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
int main()
{
	Employee * robert =new Employee(3);
	cout<<robert->giveId()<<endl;
	robert = robert->changeId(4);
	cout<<robert->giveId()<<endl;

}

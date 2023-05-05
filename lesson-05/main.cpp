#include<bits/stdc++.h>
#include "employee.h"


using namespace std;

int main()
{
	Employee * robert =new Employee(3);
	cout<<robert->giveId()<<endl;
	robert = robert->changeId(4);
	cout<<robert->giveId()<<endl;

}

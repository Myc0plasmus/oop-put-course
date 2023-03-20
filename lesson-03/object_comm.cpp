#include<bits/stdc++.h>

using namespace std;

class employee
{
	private:
		int id;
		string thoughts="good";
	public:
		employee GiveID(int new_id)
		{
			this->id = new_id;
			return *this;
		}
		int TellID()
		{
			return this->id;
		}
		void TellThoughts()
		{
			cout<<this->thoughts<<endl;
		}
	
};

class employer
{
	private:
		int id;
		vector<employee> employees;
	public:
		employer GiveID(int new_id)
		{
			this->id = new_id;
			return *this;
		}
		int TellID()
		{
			return this->id;
		}
		void ShowEmployeesNumber()
		{
			cout<<this->employees.size()<<endl;
		}
		int GetEmployeesNumber()
		{
			return employees.size();
		}
		void HireEmployee(employee &new_worker)
		{
			this->employees.push_back(new_worker);
		}
		void FireEmployee()
		{
			this->employees.pop_back();
		}
		void ChangeEmployeeID(int idx, int new_id)
		{
			this->employees[idx] = this->employees[idx].GiveID(new_id);

		}
		int HearEmployeeID(int idx)
		{
			return this->employees[idx].TellID();

		}
		void HearThougths(int idx)
		{
			this->employees[idx].TellThoughts();
		}

};


int main()
{
	employee adam;
	employee mark;

	employer daniel;
	daniel.HireEmployee(adam);
	daniel.HireEmployee(mark);

	daniel.ChangeEmployeeID(0,1);
	daniel.ChangeEmployeeID(1,2);
	daniel.ShowEmployeesNumber();
	
	for(int i = 0;i<daniel.GetEmployeesNumber();i++) cout<<"id: "<<daniel.HearEmployeeID(i)<<endl;
	for(int i = 0;i<daniel.GetEmployeesNumber();i++) daniel.HearThougths(i);
	daniel.FireEmployee();
	daniel.GetEmployeesNumber();

	daniel.HearThougths(0);


}

#include<bits/stdc++.h>

using namespace std;

class person{
	private:
		int age;
		int id;
		string first_name;
		string last_name;

			

	public:
		string status;
		person()
		{
			this->age = 0;
			this->id = 0;
			this->first_name = "anonymous";
			this->last_name = "anonymous";
			this->status = "unknown";

		}
		person(int myage, int myid) : person()
		{
			this->age = myage;
			this->id = myid;
		}
		person(int myage) : person()
		{
			this->age = myage;
		}
		person(float x) : person(static_cast<int>(x)) {}
		person(string myfirst_name, string mylast_name) : person()
		{
			this->first_name = myfirst_name;
			this->last_name = mylast_name;
		}
		person(string mystatus) : person()
		{
			this->status = mystatus;
		}
		person(int myage, int myid, string myfirst_name, string mylast_name, string mystatus)
		{
			this->age = myage;
			this->id = myid;
			this->first_name = myfirst_name;
			this->last_name = mylast_name;
			this->status = mystatus;
		}
		void GiveData()
		{
			cout<<"name: "<<this->first_name<<endl;
			cout<<"last_name: "<<this->last_name<<endl;
			cout<<"age: "<<this->age<<endl;
			cout<<"id: "<<this->id<<endl;
			cout<<"status: "<<this->status<<endl;
			cout<<endl<<endl;
		}


		
		



};


int main()
{
	person empty;
	person onlyage(3);
	person floatage((float)(3.5));
	person names("Albert","Conway");
	person onlystatus("not unknown");
	person full_person(35,13,"Mark","Doe","just existing");
	person id_person(1,2);

	empty.GiveData();
	onlyage.GiveData();
	floatage.GiveData();
	names.GiveData();
	onlystatus.GiveData();
	full_person.GiveData();
	id_person.GiveData();

}

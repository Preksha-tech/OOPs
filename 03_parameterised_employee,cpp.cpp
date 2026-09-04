#include<iostream>
using namespace std;
class Employee
{
	string name;
	int id;
	float salary;
	
	public:
		Employee(string n, int i, float s){
		name = n;
		id = i;
		salary = s;
		}
		
		 
		void display()
		{
			cout<<"name="<<name<<endl;
			cout<<"id="<<id<<endl;
			cout<<"salary="<<salary<<endl;
		 } 
};
int main(){
	Employee e("Preksha", 85, 120000);
	e.display();
	return 0;
}

#include<iostream>
using namespace std;
class student
{
	//Data members
	string name;
	int rollno;
	
	public:
		student(){
		cin>>name;	
		cin>>rollno;	
		}
		
		void display()
		{
			cout<<"enter the name"<<name<< endl;
			
			cout<<"enter the rollno"<<rollno<< endl;
			
		}
};
int main (){

student s;

s.display();
return 0;
}



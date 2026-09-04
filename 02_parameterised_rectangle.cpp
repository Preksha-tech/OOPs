#include<iostream>
using namespace std;
class Rectangle
{
	float length, breadth;
	
	public:
		Rectangle(float l, float b)
		{
			length= l;
			breadth= b;
		}
		void area(){
			cout<<"area="<<length*breadth<<endl;
		}		
};
int main()
{
	Rectangle r(10,5);
	r.area();
	return 0;
	
}

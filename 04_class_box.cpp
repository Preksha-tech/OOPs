#include<iostream>
using namespace std;

class Box
{
	float length, width, height;
	
	public:
		Box()
		{
			length=width=height=1;
		}
		Box(float l, float w, float h){
		length= l;
		width= w;
		height= h;
		}
		float volume()
		{
			return length*width*height;
		}
};
int main()
{
	Box b1; //default
	Box b2(2,3,4); //parameterised
	
	cout<<"b1="<<b1.volume()<<endl;
	cout<<"b2="<<b2.volume()<<endl;
	return 0;
}

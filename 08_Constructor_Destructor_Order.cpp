#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

void display()
{
    cout << "\nInside function:" << endl;

    Demo obj2;
    Demo obj3;

    cout << "Function ending..." << endl;
}

int main()
{
    cout << "Inside main:" << endl;

    Demo obj1;

    display();

    cout << "\nBack in main..." << endl;

    return 0;
}

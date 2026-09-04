#include <iostream>
using namespace std;

class Demo
{
public:
    // Constructor
    Demo()
    {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Demo obj1;
    Demo obj2;
    Demo obj3;

    return 0;
}

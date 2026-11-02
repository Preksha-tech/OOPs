#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Current month is October" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Next month will be November" << endl;
    }
};

int main()
{
    Base b;
    Derived d;

    cout << "Base class function:" << endl;
    b.show();

    cout << "Derived class function:" << endl;
    d.show();

    return 0;
}

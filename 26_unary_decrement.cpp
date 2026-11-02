#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number()
    {
        value = 10;
    }

    void operator--()
    {
        --value;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n;

    cout << "Before decrement:" << endl;
    n.display();

    --n;

    cout << "After decrement:" << endl;
    n.display();

    return 0;
}

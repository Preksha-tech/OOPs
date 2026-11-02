#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    Number operator+(Number n)
    {
        return Number(value + n.value);
    }

    Number operator-(Number n)
    {
        return Number(value - n.value);
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Number n1(20), n2(10);

    Number n3 = n1 + n2;
    Number n4 = n1 - n2;

    cout << "Addition = ";
    n3.display();

    cout << "Subtraction = ";
    n4.display();

    return 0;
}

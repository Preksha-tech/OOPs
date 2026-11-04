#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        cout << "Addition: " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide()
    {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero not allowed!" << endl;
    }
};

int main()
{
    Calculator<float> c(20, 5);

    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex c)
    {
        return Complex(real + c.real,
                       imaginary + c.imaginary);
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4), c2(2, 5);

    Complex c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum = ";
    c3.display();

    return 0;
}

#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before swapping: " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After swapping: " << x << " " << y << endl;

    char a = 'A', b = 'B';

    cout << "\nBefore swapping: " << a << " " << b << endl;
    swapValues(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}

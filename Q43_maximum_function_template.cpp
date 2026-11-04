#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Greater integer: " << maximum(10, 20) << endl;

    cout << "Greater float: " << maximum(5.5, 8.2) << endl;

    return 0;
}

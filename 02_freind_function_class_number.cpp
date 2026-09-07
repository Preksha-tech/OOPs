#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void sum(Number n);
};

void sum(Number n)
{
    cout << "Sum = " << n.a + n.b;
}

int main()
{
    Number n;

    n.getData();
    sum(n);

    return 0;
}

#include <iostream>
using namespace std;

class Counter
{
    int count;

public:
    Counter()
    {
        count = 5;
    }

    void operator++()
    {
        ++count;
    }

    void display()
    {
        cout << "Count = " << count << endl;
    }
};

int main()
{
    Counter c;

    cout << "Before increment:" << endl;
    c.display();

    ++c;

    cout << "After increment:" << endl;
    c.display();

    return 0;
}

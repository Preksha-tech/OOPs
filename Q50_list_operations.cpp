#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_front(20);
    l.push_front(10);
    l.push_back(30);
    l.push_back(40);

    cout << "Original List: ";

    for(list<int>::iterator i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }

    l.remove(20);

    cout << "\nAfter removing 20: ";

    for(list<int>::iterator i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}

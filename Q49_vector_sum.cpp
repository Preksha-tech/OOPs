#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int x, sum = 0;

    cout << "Enter 5 integers: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << "Vector elements: ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        sum += v[i];
    }

    cout << "\nSum = " << sum;

    return 0;
}

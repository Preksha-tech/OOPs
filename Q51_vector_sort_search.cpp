#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(50);
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);

    sort(v.begin(), v.end());

    cout << "Sorted elements: ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    int n;

    cout << "\nEnter value to search: ";
    cin >> n;

    if(binary_search(v.begin(), v.end(), n))
    {
        cout << "Element Found!";
    }
    else
    {
        cout << "Element Not Found!";
    }

    return 0;
}

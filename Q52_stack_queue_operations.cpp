#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack Top: " << s.top() << endl;

    s.pop();

    cout << "After Pop: " << s.top() << endl;

    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "\nQueue Front: " << q.front() << endl;

    q.pop();

    cout << "After Pop: " << q.front() << endl;

    return 0;
}

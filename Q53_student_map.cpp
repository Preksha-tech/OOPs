#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> student;

    int n, roll, searchRoll;
    string name;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;

        student.insert(make_pair(roll, name));
    }

    cout << "\nStudent Records:\n";

    map<int, string>::iterator it;

    for(it = student.begin(); it != student.end(); it++)
    {
        cout << "Roll No: " << it->first
             << " Name: " << it->second << endl;
    }

    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    it = student.find(searchRoll);

    if(it != student.end())
    {
        cout << "Student Found: " << it->second;
    }
    else
    {
        cout << "Student Not Found!";
    }

    return 0;
}

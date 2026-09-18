#include <iostream>
using namespace std;

class Person
{
protected:
    char name[20];
};

class Employee : public Person
{
protected:
    int empId;
};

class Manager : public Employee
{
    char department[20];

public:
    void input()
    {
        cin >> name >> empId >> department;
    }

    void display()
    {
        cout << name << " " << empId << " "
             << department;
    }
};

int main()
{
    Manager m;

    m.input();
    m.display();

    return 0;
}


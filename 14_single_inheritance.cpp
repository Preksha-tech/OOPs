#include<iostream>
using namespace std;

class Person
{
protected:
    char name[20];
    int age;

public:
    Person()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person
{
    int rollno;
    char course[20];

public:
    Student()
    {
        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Course: ";
        cin >> course;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}


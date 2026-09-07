#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    friend void display(Student s);
};

void display(Student s)
{
    cout << "\nName: " << s.name;
    cout << "\nMarks: " << s.marks;
}

int main()
{
    Student s;

    s.getData();
    display(s);

    return 0;
}

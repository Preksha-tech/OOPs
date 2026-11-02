#include <iostream>
using namespace std;

class Person
{
public:
    virtual ~Person()
    {
        cout << "Person destructor called" << endl;
    }
};

class Student : public Person
{
public:
    ~Student()
    {
        cout << "Student destructor called" << endl;
    }
};

int main()
{
    Person *ptr = new Student();

    delete ptr;

    return 0;
}

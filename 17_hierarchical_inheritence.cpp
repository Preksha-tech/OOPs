#include <iostream>
using namespace std;

class Vehicle
{
protected:
    char brand[20];
    char model[20];
};

class Car : public Vehicle
{
    int doors;

public:
    void input()
    {
        cin >> brand >> model >> doors;
    }

    void display()
    {
        cout << "Car: " << brand << " " << model << " "
             << doors << endl;
    }
};

class Bike : public Vehicle
{
    int engineCapacity;

public:
    void input()
    {
        cin >> brand >> model >> engineCapacity;
    }

    void display()
    {
        cout << "Bike: " << brand << " " << model << " "
             << engineCapacity << " cc" << endl;
    }
};

int main()
{
    Car c;
    Bike b;

    cout << "Enter Car details: ";
    c.input();

    cout << "Enter Bike details: ";
    b.input();

    cout << "\n--- Details ---" << endl;
    c.display();
    b.display();

    return 0;
}


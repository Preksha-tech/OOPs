#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void displayInfo()
    {
        cout << "Vehicle Information" << endl;
    }
};

class Car : public Vehicle
{
public:
    void displayInfo()
    {
        cout << "This is a Car" << endl;
        cout << "Car has 4 wheels" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void displayInfo()
    {
        cout << "This is a Bike" << endl;
        cout << "Bike has 2 wheels" << endl;
    }
};

class Bus : public Vehicle
{
public:
    void displayInfo()
    {
        cout << "This is a Bus" << endl;
        cout << "Bus has 6 wheels" << endl;
    }
};

int main()
{
    Vehicle *ptr;

    Car c;
    Bike b;
    Bus bs;

    ptr = &c;
    ptr->displayInfo();

    ptr = &b;
    ptr->displayInfo();

    ptr = &bs;
    ptr->displayInfo();

    return 0;
}

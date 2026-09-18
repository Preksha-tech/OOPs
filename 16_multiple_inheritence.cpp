#include <iostream>
using namespace std;

class Academic
{
protected:
    int marks;
};

class Sports
{
protected:
    int sportsScore;
};

class Result : public Academic, public Sports
{
public:
    void input()
    {
        cin >> marks >> sportsScore;
    }

    void display()
    {
        int total;
        total = marks + sportsScore;

        cout << "Marks: " << marks << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << total;
    }
};

int main()
{
    Result r;

    r.input();
    r.display();

    return 0;
}


#include <iostream>
using namespace std;

class Student
{
    int marks[5];

public:
    void inputMarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject "
                 << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculateAverage()
    {
        int sum = 0;

        try
        {
            for (int i = 0; i < 5; i++)
            {
                if (marks[i] < 0 || marks[i] > 100)
                {
                    throw marks[i];
                }

                sum += marks[i];
            }

            float average = sum / 5.0;

            cout << "Average Marks = "
                 << average << endl;
        }
        catch (int x)
        {
            cout << "Error: Invalid marks "
                 << x << ". Marks must be between 0 and 100."
                 << endl;
        }
    }
};

int main()
{
    Student s;

    s.inputMarks();
    s.calculateAverage();

    return 0;
}

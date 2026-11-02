#include <iostream>
using namespace std;

class LibraryAccount
{
    int availableBooks;

public:
    LibraryAccount(int books)
    {
        availableBooks = books;
    }

    void issueBook(int amount)
    {
        try
        {
            if (amount > availableBooks)
            {
                throw amount;
            }

            availableBooks = availableBooks - amount;

            cout << "Books issued successfully!" << endl;
            cout << "Remaining books = "
                 << availableBooks << endl;
        }
        catch (int x)
        {
            cout << "Error: Not enough books available!" << endl;
        }
    }
};

int main()
{
    LibraryAccount l(10);

    int amount;

    cout << "Enter number of books to issue: ";
    cin >> amount;

    l.issueBook(amount);

    return 0;
}

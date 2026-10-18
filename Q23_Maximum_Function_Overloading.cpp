#include <iostream>
using namespace std;

class Maximum {
public:
    int findMax(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }

    int findMax(int a, int b, int c) {
        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }

    double findMax(double a, double b) {
        if (a > b)
            return a;
        else
            return b;
    }
};

int main() {
    Maximum m;

    cout << "Maximum of two integers: "
         << m.findMax(10, 20) << endl;

    cout << "Maximum of three integers: "
         << m.findMax(10, 30, 20) << endl;

    cout << "Maximum of decimals: "
         << m.findMax(4.5, 3.8) << endl;

    return 0;
}


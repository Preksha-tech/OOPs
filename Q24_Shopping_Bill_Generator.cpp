#include <iostream>
using namespace std;

class Bill {
public:
    double calculateBill(int quantity, double price) {
        return quantity * price;
    }

    double calculateBill(int q1, double p1,
                         int q2, double p2) {
        return (q1 * p1) + (q2 * p2);
    }

    double calculateBill(double amount, int discount) {
        return amount - (amount * discount / 100.0);
    }
};

int main() {
    Bill b;

    cout << "One item bill: "
         << b.calculateBill(2, 100.0) << endl;

    cout << "Two items bill: "
         << b.calculateBill(2, 100.0, 3, 50.0) << endl;

    cout << "Bill after discount: "
         << b.calculateBill(1000.0, 10) << endl;

    return 0;
}


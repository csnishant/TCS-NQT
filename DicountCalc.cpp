#include <iostream>
using namespace std;
int main()
{
    double amount;
    cout << "Eneter total amount: ";
    cin >> amount;

    double discount = 0, finalAmount;

    if (amount < 1000)
    {
        discount = amount * 0.05;
    }
    else if (amount < 5000)
    {
        discount = amount * 0.10;
    }
    else
    {
        discount = amount * 0.15;
    }
    cout << "Discount: " << discount << endl;

    cout << "Final Amount to Pay: " << amount - discount;
}
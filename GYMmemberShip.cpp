#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "invalid input";
    }

    else if (n == 1)
    {
        cout << "cost: 2000";
    }
    else if (n >= 2 && n <= 3)
    {
        cout << "cost: 5000";
    }
    else if (n >= 4 && n <= 6)
    {
        cout << "cost: 9000";
    }
    else
    {
        cout << "cost: 15000";
    }
}
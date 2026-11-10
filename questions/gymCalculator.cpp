#include <iostream>
using namespace std;

int solve(int n)
{

    if (n <= 0 || n % 3 != 0)
    {
        cout << "Error";
        return 0;
    }
    int totalCost = 0;

    totalCost += (n / 12) * 15000;
    n = n % 12;

    totalCost += (n / 9) * 12000;
    n = n % 9;

    totalCost += (n / 6) * 9000;
    n = n % 6;

    totalCost += (n / 3) * 5000;
    n = n % 3;

    return totalCost;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n);
}
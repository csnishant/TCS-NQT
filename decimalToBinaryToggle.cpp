#include "bits/stdc++.h"
using namespace std;

int solve(int num)
{
    int bits = 0;
    int temp = num;

    while (temp > 0)
    {
        bits++;
        temp /= 2;
    }

    int mask = (1 << bits) - 1;

    int toggled = num ^ mask;
    cout << "Toggled number: " << toggled << endl;

    return 0;
}

int main()
{

    solve(10);
}
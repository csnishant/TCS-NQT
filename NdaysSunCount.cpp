#include <bits/stdc++.h>
using namespace std;

int main()
{
    string day;
    int n;

    cin >> day;
    cin >> n;

    int start;
    if (day == "mon")
        start = 1;
    else if (day == "tue")
        start = 2;
    else if (day == "wed")
        start = 3;
    else if (day == "thu")
        start = 4;
    else if (day == "fri")
        start = 5;
    else if (day == "sat")
        start = 6;
    else
    {
        start = 0; // sunday
    }

    int count = 0;

    for (int i = 0; i <= n; i++)
    {
        if ((start + i) % 7 == 0)
        {
            count++;
        }
    }

    cout << count;
}
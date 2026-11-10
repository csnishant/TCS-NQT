#include <bits/stdc++.h>
using namespace std;

// check
int main()
{
    int n;
    cin >> n;

    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    char ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= a[i];
    }
    if (ans == 0)
    {
        cout << "all character occur even times";
    }

    cout << ans;
}
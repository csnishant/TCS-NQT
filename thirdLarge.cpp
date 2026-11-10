#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a)
{
    int n = a.size();

    int large = INT_MIN, secondLarg = INT_MIN, thirdLarg = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            thirdLarg = secondLarg;
            secondLarg = large;
            large = a[i];
        }

        // duplicate avoid
        else if (a[i] != large && a[i] > secondLarg)
        {
            thirdLarg = secondLarg;
            secondLarg = a[i];
        }
        else if (a[i] > thirdLarg && a[i] != secondLarg && a[i] != large)
        {
            thirdLarg = a[i];
        }
    }
    return thirdLarg;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "thirdLarge is: " << solve(a);
}

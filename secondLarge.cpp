#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a)
{
    int n = a.size();

    int large = 0, secondLarge = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            secondLarge = large;
            large = a[i];
        }
        if (a[i] < large && a[i] > secondLarge)
        {
            secondLarge = a[i];
        }
    }
    return secondLarge;
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

    cout << "second largest is: " solve(a);
}
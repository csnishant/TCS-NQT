#include <bits/stdc++.h>
using namespace std;

int findFirst(vector<int> &a, int n, int x)
{

    int low = 0;
    int high = n - 1;

    int first = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == x)
        {
            first = mid;
            high = mid - 1;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(vector<int> &a, int n, int x)
{

    int low = 0;
    int high = n - 1;

    int last = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == x)
        {
            last = mid;
            low = mid + 1;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
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

    int x;
    cin >> x;

    int first = findFirst(a, n, x);
    int last = findLast(a, n, x);

    if (first == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (last - first) << endl;
    }

    return 0;
}
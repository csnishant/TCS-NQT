#include <bits/stdc++.h>

using namespace std;

int solve(int a[], int n, int k)
{
    int maxSum = 0, sum = 0;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        sum += a[right];

        if (right - left + 1 > k)
        {
            sum -= a[left];
            left++;
        }
        if (right - left + 1 == k)
        {
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << solve(a, n, 3);
}
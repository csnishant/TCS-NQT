#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {7, 4, 6, 3, 5, 9};
    int n = sizeof(a) / sizeof(a[0]);

    int count = 0;
    int maxSoFar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >maxSoFar)
        {
            count++;
            maxSoFar = a[i];
        }
    }
    cout << count;
}
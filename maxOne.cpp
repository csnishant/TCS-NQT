#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];

    int maxCount = 0;

    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {

            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                count++;
            }
        }
        maxCount = max(maxCount, count);
    }

    cout << maxCount;
}
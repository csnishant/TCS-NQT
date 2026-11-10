
#include "bits/stdc++.h"
using namespace std;

int solve(vector<vector<int>> a) // Brute Force
{
    int maxRow = -1;
    int maxCount = INT_MIN;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int countOnes = 0;
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] == 1)
            {
                countOnes++;
            }
        }
        if (countOnes > maxCount)
        {
            maxCount = countOnes;
            maxRow = i;
        }
    }
    cout << "Row " << maxRow << " has maximum 1s" << endl;
    return 0;
}

int solve1(vector<vector<int>> a) // Optimized
{
    int n = a.size();
    int m = a[0].size();
    int maxRow = -1;
    int j = m - 1; // start from top-right

    for (int i = 0; i < n; i++)
    {
        while (j >= 0 && a[i][j] == 1)
        {
            j--;
            maxRow = i;
        }
    }
    cout << "Row " << maxRow << " has maximum 1s" << endl;
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // solve(a);  // brute force
    solve1(a); // optimized
}

#include "bits/stdc++.h"
using namespace std;

void solve(vector<int> nums, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << nums[k] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    solve(nums, 5);
}
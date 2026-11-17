#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> a, vector<int> b)
{

    vector<int> ans;

    int i = 0;
    int j = b.size()-1;

    while (i < a.size() && j >= 0)
    {
        if (a[i] <= b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else
        {
            ans.push_back(b[j]);
            j--;
        }
    }

    while (i < a.size())
    {
        ans.push_back(a[i]);
        i++;
    }
    while (j >= 0)
    {
        ans.push_back(a[j]);
        j--;
    }
    return ans;
}

int main()
{
    vector<int> a = {1, 3, 5, 7, 9};
    vector<int> b = {8, 6, 4, 2};

    vector<int> res = solve(a, b);

    for (int x : res)
    {
        cout << x << " ";
    }
    return 0;
}
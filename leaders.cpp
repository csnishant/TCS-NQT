#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> a)
{

    int n = a.size();
    vector<int> ans;

    int maxRight = a[n - 1];
    ans.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > maxRight)
        {
            ans.push_back(a[i]);
            maxRight = a[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<int> a;
    int x;

    while (ss >> x)
    {
        a.push_back(x);
    }

    vector<int> ans = solve(a);

    for (int i : ans)
    {
        
        cout << i << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> a)
{
    int n = a.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[count] = a[i];
            count++;
        }
    }
    while (count < n)
    {
        a[count++] = 0;
    }
    return a;
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
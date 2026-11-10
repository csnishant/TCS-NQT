#include <bits/stdc++.h>
using namespace std;

string solve(vector<string> &s)
{

    string first = s[0];
    int n = first.size();

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        char ch = first[i];
        for (int j = 1; j < s.size(); j++)
        {
            if (i >= s[j].size() || s[j][i] != ch)
            {
                return ans;
            }
        }
        ans += ch;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {

        cin >> s[i];
    }

    cout << solve(s);
}
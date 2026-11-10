#include <bits/stdc++.h>
using namespace std;

char fun(vector<char> a)
{
    int n = a.size();

    char ans = '\0';

    unordered_map<char, int> mp;

    for (char i : a)
    {
        mp[i]++;
    }

    // traverse
    for (char i : a)
    {
        if (mp[i] % 2 != 0)
        {

            ans = a[i];
            break;
        }
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<char> a;
    char x;
    while (ss >> x)
    {
        a.push_back(x);
    }

    char result = fun(a);
    if (result == '\0')
    {
        cout << "all are even";
    }
    else
    {
        cout << result;
    }
}
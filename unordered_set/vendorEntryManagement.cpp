#include <bits/stdc++.h>
using namespace std;

int blocked = 0, checked = 0;

void solve(const unordered_set<int> &registered, int m)
{

    unordered_set<int> active;
    while (m--)
    {

        string op;
        int x;

        cin >> op >> x;

        if (op == "Entry")
        {
            if (registered.count(x))
            {
                active.insert(x);
            }
            else
            {
                blocked++;
            }
        }

        else if (op == "Check")
        {
            checked++;
        }

        else if (op == "Exit")
        {
            active.erase(x);
        }
    }
    cout << active.size() << endl;
}

int main()
{
    int n, m;
    cin >> n;

    unordered_set<int> registered;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        registered.insert(x);
    }
    cin >> m;

    solve(registered, m);

    cout << blocked << endl;
    cout << checked << endl;

    return 0;
}
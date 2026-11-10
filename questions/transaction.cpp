#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<string> transactions;

    int duplicateCount = 0;
    for (int i = 0; i < n; i++)
    {
        string sender, receiver, timestamp;
        int amount;

        cin >> sender >> receiver >> amount >> timestamp;

        string key = sender + "_" + receiver + "_" + to_string(amount);
    }
}
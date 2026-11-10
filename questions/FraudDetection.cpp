#include <bits/stdc++.h>
using namespace std;

struct Transaction
{
    string sender, receiver;
    double amount;
    long long int time;
};

int main()
{
    int n;
    cin >> n;

    vector<Transaction> t(n);

    for (int i = 0; i < n; i++)
    {
        cin >> t[i].sender >> t[i].receiver >> t[i].amount >> t[i].time;
    }

    vector<bool> fraud(n, false);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (t[i].sender == t[j].sender && t[i].receiver == t[j].receiver && t[i].amount == t[j].amount && abs(t[i].time - t[j].time) <= 60)
            {
                fraud[i] = true;
                fraud[j] = true;
            }
        }
    }

    // print fraud transactions
    cout << "Fruad Trans.." << endl;
    ;

    for (int i = 0; i < n; i++)
    {
        if (fraud[i])
        {
            cout << t[i].sender << " " << t[i].receiver << " " << t[i].amount << " " << t[i].time << endl;
        }
    }
}
// input example

// 5
// Rahul Amit 500 1000
// Rahul Amit 500 1040
// Amit Priya 200 1100
// Rahul Amit 500 1200
// Neha Raj 1000 1300
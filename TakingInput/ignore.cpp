#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore(); // To ignore the newline character after reading n
    string s;
    getline(cin, s); // To consume the newline character after reading n

    cout << n << " " << s;
}
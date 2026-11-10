#include <bits/stdc++.h>
using namespace std;

int solve(int index, int n, vector<int> &values, int end, int previous)
{
    // Base case: All positions filled
    if (index == n)
    {
        return 1;
    }

    int count = 0;

    // Try every allowed number
    for (int current : values)
    {
        // Last soldier must be equal to end
        if (index == n - 1 && current != end)
        {
            continue;
        }

        // Adjacent soldiers cannot have same number
        if (current == previous)
        {
            continue;
        }

        count += solve(index + 1, n, values, end, current);
    }

    return count;
}

int countArrangements(int n, vector<int> &values, int end)
{
    // First soldier must be 1
    if (find(values.begin(), values.end(), 1) == values.end())
    {
        return 0;
    }

    return solve(1, n, values, end, 1);
}

int main()
{
    int n = 4;
    vector<int> values = {1, 2, 3};
    int end = 2;

    cout << countArrangements(n, values, end);

    return 0;
}
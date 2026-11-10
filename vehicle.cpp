#include "bits/stdc++.h";
using namespace std;

// v= total vehicle
// w= total wheels
void findVehicles(int v, int w)
{
    if (w < 2 * v || w > 4 * v || w % 2 != 0)
    {
        cout << "Invalid input" << endl;
    }
    bool found = false;

    // i=two wheeler vehicle
    // j=four wheeler
    for (int i = 0; i <= v; i++)
    {
        int j = v - i;
        int wheels = (2 * i) + (4 * j);

        if (wheels == w)
        {
            cout << "Two wheeler: " << i << endl;
            cout << "Four wheeler: " << j << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "vo valid answer find";
    }
}

int main()
{
    findVehicles(200, 540);
}
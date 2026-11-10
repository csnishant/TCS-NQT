#include <iostream>
using namespace std;

int sumOfTable(int n)
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += n * i;
    }
    return sum;
}

int sumOfCube(int s, int e)
{
    int sum = 0;
    for (int i = s; i <= e; i++)
    {
        sum += i * i * i;
    }
    return sum;
}
int main()
{

    cout << sumOfCube(1, 5);
}
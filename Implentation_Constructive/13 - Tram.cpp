#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int exits;
    int enters;
    int currCapacity = 0;
    int maxCapacity = 0;
    cin >> exits;
    cin >> enters;
    currCapacity = enters;
    maxCapacity = currCapacity;
    for (int i = 1; i < t; i++)
    {
        cin >> exits;
        cin >> enters;

        currCapacity -= exits;

        currCapacity += enters;
        maxCapacity = max(currCapacity, maxCapacity);
    }

    cout << maxCapacity;
}
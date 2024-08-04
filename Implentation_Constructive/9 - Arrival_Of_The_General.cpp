#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int mini = 1e9;
    int maxi = -1e9;
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;

        if (mini >= x)
        {
            mini = x;
            minIndex = i;
        }
        if (x > maxi)
        {
            maxi = x;
            maxIndex = i;
        }
    }
    int swaps = maxIndex + t - minIndex - 2;
    int oppSwaps = maxIndex + t - minIndex - 1;

    if (maxIndex < minIndex)
        cout << oppSwaps;
    else
        cout << swaps;
}
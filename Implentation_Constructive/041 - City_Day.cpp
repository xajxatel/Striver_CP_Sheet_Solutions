

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        bool found = true;

        for (int j = max(1, i - x); j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                found = false;
                break;
            }
        }

        for (int k = i + 1; k <= i + y && k <= n; k++)
        {
            if (arr[k] < arr[i])
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
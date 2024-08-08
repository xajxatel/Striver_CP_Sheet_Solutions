#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        n = n * 2;
        vector<int> list;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            list.push_back(x);
        }

        sort(list.begin(), list.end());

        int i = 0;
        int j = 1;
        int minDiff = 1e9;
        while (j < n)
        {
            int firstCount = 1;
            int secondCount = 1 + (j - 1) * 2;

            if (firstCount + secondCount == n)
            {
                minDiff = min(minDiff, list[j] - list[i]);
            }
            j++;
            i++;
        }

        cout << minDiff << endl;
    }
}

#include <iostream>

#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long ans = arr[n - 1];
    int prevCount = ans;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= prevCount)
        {

            prevCount = max(0, prevCount - 1);
            ans += prevCount;
        }
        else
        {
            prevCount = arr[i];
            ans += prevCount;
        }
    }

    cout << ans << endl;
}

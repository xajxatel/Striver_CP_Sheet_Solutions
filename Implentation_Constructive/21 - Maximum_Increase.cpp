#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int prev = -1e9;
    int len = 0;
    int maxLen = -1e9;
    while (n--)
    {
        int x;
        cin >> x;

        if (x > prev)
        {
            prev = x;
            len++;
            maxLen = max(maxLen, len);
        }
        else
        {
            prev = x;
            len = 1;
        }
    }
    cout << maxLen << endl;
}
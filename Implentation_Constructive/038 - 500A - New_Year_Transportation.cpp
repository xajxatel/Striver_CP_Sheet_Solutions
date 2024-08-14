#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 1; i < n; ++i)
    {
        cin >> a[i];
    }

    int currentCell = 1;
    while (currentCell < t)
    {
        currentCell += a[currentCell];
    }

    if (currentCell == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
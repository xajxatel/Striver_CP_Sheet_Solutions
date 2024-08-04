#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> ans(t);
    for (int i = 0; i < t; i++)
    {

        int from = i;
        int to;
        cin >> to;

        ans[to - 1] = from + 1;
    }

    for (auto ele : ans)
        cout << ele << " ";
}
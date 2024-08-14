#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    int d;
    cin >> n >> d;
    int arr[n];

    multiset<pair<int, int>> mpp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp.insert({arr[i], i + 1});
    }
    vector<int> ans;
    for (auto ele : mpp)
    {
        if (ele.first <= d)
        {
            ans.push_back(ele.second);
            d = d - ele.first;
        }
        else
        {
            break;
        }
    }
    cout << ans.size() << endl;
    for (int ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}
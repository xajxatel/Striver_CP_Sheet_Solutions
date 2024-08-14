#include <iostream>
#include <unordered_map>

using namespace std;
int main()
{
    int k;
    cin >> k;

    string str;
    cin >> str;

    int n = str.size();

    unordered_map<char, int> mpp;

    for (auto ele : str)
    {
        mpp[ele]++;
    }
    string temp = "";
    for (auto ele : mpp)
    {
        if (ele.second % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }

        int numChars = ele.second / k;

        for (int i = 0; i < numChars; i++)
        {
            temp += ele.first;
        }
    }
    string result = "";
    for (int i = 0; i < k; i++)
    {
        result += temp;
    }

    cout << result << endl;
}
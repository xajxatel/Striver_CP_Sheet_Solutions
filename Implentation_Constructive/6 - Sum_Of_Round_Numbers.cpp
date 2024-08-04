#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int num;

    for (int i = 0; i < t; i++)
    {
        cin >> num;
        vector<int> temp;
        int multiplier = 1;
        int terms = 0;
        while (num != 0)
        {

            int digit = num % 10;
            int ans = digit * multiplier;
            if (ans)
            {
                temp.push_back(ans);
                terms++;
            }
            multiplier *= 10;
            num /= 10;
        }

        cout << terms << endl;
        for (auto ele : temp)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}
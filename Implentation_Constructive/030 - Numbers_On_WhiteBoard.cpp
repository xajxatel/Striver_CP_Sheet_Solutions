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

        if (n == 2)
        {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
            continue;
        }

        vector<int> list(n);

        for (int i = 0; i < n; i++)
        {
            list[i] = i + 1;
        }

        int k = n - 1;
        vector<vector<int>> nums(k);
        for (int j = 0; j < k; j++)
        {
            int size = list.size();
            int count = 0;
            int lastparity = list[size - 1] % 2;
            int sum = 0;
            vector<int> indices;
            for (int i = size - 1; i >= 0; i--)
            {
                if (list[i] % 2 == lastparity)
                {
                    count++;
                    indices.push_back(i);
                    sum += list[i];
                }
                if (count == 2)
                    break;
            }

            for (auto ind : indices)
            {
                nums[j].push_back(list[ind]);
                list.erase(list.begin() + ind);
            }

            list.push_back(sum / 2);
        }

        cout << list[0] << endl;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << nums[i][j] << " ";
            }
            cout << endl;
        }
    }
}
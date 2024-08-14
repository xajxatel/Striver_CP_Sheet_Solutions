#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] % 2 != 0)
        {
            double k = double(a[i]) / 2;
            if (flag == 0)
            {
                a[i] = ceil(k);
                flag = 1;
            }
            else
            {
                a[i] = floor(k);
                flag = 0;
            }
        }
        else
        {
            a[i] = a[i] / 2;
        }
    }

    for (auto ele : a)
    {
        cout << ele << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int targetSum;
    cin >> targetSum;
    int num4s = targetSum / 4;
    for (int i = 0; i <= num4s; i++)
    {
        int remsum = targetSum - 4 * i;

        if (remsum % 7 == 0)
        {

            int rem7s = remsum / 7;

            for (int j = 0; j < i; j++)
            {
                cout << "4";
            }

            for (int k = 0; k < rem7s; k++)
            {
                cout << "7";
            }

            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
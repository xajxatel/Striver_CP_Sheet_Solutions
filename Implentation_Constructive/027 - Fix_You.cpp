#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int flips = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char dir;
                cin >> dir;
                if (i == 0 && j == m - 1)
                {
                    if (dir == 'R')
                        flips++;
                }

                if (i != 0 && j == m - 1)
                {
                    if (dir == 'R')
                        flips++;
                }

                if (i == n - 1 && j != m - 1)
                {
                    if (dir == 'D')
                        flips++;
                }
            }
        }

        cout << flips << endl;
    }
}
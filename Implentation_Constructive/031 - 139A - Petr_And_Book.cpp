#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> pages(7);

    for (int i = 0; i < 7; i++)
    {
        cin >> pages[i];
    }
    int i = 0;
    while (n > 0)
    {

        n = n - pages[i % 7];

        if (n <= 0)
            break;
        i++;
    }

    cout << i % 7 + 1 << endl;
}
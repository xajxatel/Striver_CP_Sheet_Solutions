#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long a, b, c; // b = donuts , c==cost
        cin >> a >> b >> c;

        long long s1 = -1;
        long long s2 = -1;

        if (a < c)
            s1 = 1;
        if (a * b > c)
            s2 = b;

        cout << s1 << " " << s2 << endl;
    }
    return 0;
}
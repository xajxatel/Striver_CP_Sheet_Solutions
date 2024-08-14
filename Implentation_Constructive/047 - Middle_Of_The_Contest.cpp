#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    char c ;
    cin >> h1 >>c>> m1;
   
    cin >> h2 >>c >>m2;

    int newh = h1 * 60 + m1;
    int newh2 = h2 * 60 + m2;

    int middleh = (newh + newh2) / 2;

    int ansh = middleh / 60;
    int ansm = middleh % 60;

    if (ansh > 9 && ansm > 9)
    {
        cout << ansh << ":" << ansm << endl;
    }
    else
    {
        if (ansh < 10)
        {
            cout << 0;
        }
        cout << ansh<<":";
        if (ansm < 10)
            cout << 0;
        cout << ansm << endl;
    }

    return 0;
}
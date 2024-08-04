#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, k, l, c, d, p, nl, np;

    cin >> n;
    cin >> k;
    cin >> l;
    cin >> c;
    cin >> d;
    cin >> p;
    cin >> nl;
    cin >> np;

    int drinks = (k * l) / nl;
    int salts = (p / np);
    int slices = c * d;

    int ans = min(drinks, min(salts, slices));

    cout << ans / n << endl;
}
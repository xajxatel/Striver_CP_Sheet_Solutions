#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v(3);

    cin >> v[0];
    cin >> v[1];
    cin >> v[2];

    sort(v.begin(), v.end());

    cout << v[1] - v[0] + v[2] - v[1] << endl;
}
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        // Sort x, y, z to get them in increasing order
        int arr[3] = {x, y, z};
        sort(arr, arr + 3);
        
        // Check if the two largest values are the same
        if (arr[1] == arr[2]) {
            cout << "YES\n";
            cout << arr[0] << " " << arr[0] << " " << arr[2] << "\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
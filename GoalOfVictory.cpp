#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x = 0;
    int* arr = new int[n]; 
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        x += arr[i];
    }
    x = -x;
    cout << x << endl;
     
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
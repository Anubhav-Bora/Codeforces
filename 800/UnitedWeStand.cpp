#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<int, int> mp; // frequency map
        for (int i = 0; i < n; i++) {
            mp[v[i]]++;
        }
        if (mp.size() == 1) {
            cout << "-1" << endl;
        } else {
            int ele = mp.begin()->first; // key
            int freq = mp.begin()->second; // frequency
            cout << freq << " " << n - freq << endl; // length of array b and c
            for (int i = 0; i < freq; i++) {
                cout << ele << " ";
            }
            mp.erase(ele);
            for(auto it = mp.begin(); it != mp.end(); it++) {
                for (int i = 0; i < it->second; i++) {
                    cout << it->first << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
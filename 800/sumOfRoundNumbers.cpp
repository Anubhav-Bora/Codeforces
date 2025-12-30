#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  

        vector<int> ans;
        int p = 1;
        while (n > 0) {
            if (n % 10 > 0) {
                ans.push_back((n % 10) * p);
            }
            n = n / 10;
            p = p * 10;
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;  
    }

    return 0;
}


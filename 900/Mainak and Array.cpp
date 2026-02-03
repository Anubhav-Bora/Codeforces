#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int ans = a[n - 1] - a[0];

        // Put max element at the end
        for (int i = 0; i < n - 1; ++i)
            ans = max(ans, a[n - 1] - a[i]);
        // Put min element at the start
        for (int i = 1; i < n; ++i)
            ans = max(ans, a[i] - a[0]);

        // Rotate any two adjacent elements
        for (int i = 0; i < n - 1; ++i)
            ans = max(ans, a[i] - a[i + 1]);

        cout << ans << endl;
    }
    return 0;
}
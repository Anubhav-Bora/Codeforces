#include <bits/stdc++.h>
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
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                prefix[i + 1] = prefix[i] + 1;
            }
            else
            {
                prefix[i + 1] = prefix[i] + 0;
            }
        }
        int total2 = prefix[n];
        int ans = -1;
        for (int k = 1; k < n; k++)
        {
            if (prefix[k] == total2 - prefix[k])
            {
                ans = k;
                break;
            }
        }
        cout << ans << endl;
    }
}
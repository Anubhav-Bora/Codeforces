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
        int count = 0;
        int ans = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                count++;
                ans = max(ans, count);
            }
            if (arr[i] == 1)
            {
                count = 0;
            }
        }
        cout << ans << endl;
    }
}
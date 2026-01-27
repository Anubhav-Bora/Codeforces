#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int curr_len = 1;
        int max_len = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                curr_len++;
                max_len = max(max_len, curr_len);
            }
            else
            {
                curr_len = 1;
            }
        }
        cout << n - max_len << endl;
    }
}
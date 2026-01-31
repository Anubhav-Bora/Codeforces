#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1), prefix(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        long long totalSum = prefix[n];
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int sumOldSegment = prefix[r] - prefix[l - 1];
            int len = r - l + 1;
            int newSum = totalSum - sumOldSegment + k * len;
            if (newSum % 2 != 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
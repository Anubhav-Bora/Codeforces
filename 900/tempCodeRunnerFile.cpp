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
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long count = 0;
        bool possible = true;

        for (int i = n - 2; i >= 0; i--)
        {
            while (a[i] >= a[i + 1])
            {
                a[i] /= 2;
                count++;

                if (a[i] <= 0)
                {
                    possible = false;
                    break;
                }
            }
            if (!possible)
                break;
        }

        if (!possible)
            cout << -1 << endl;
        else
            cout << count << endl;
    }
}

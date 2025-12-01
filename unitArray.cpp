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
        int neg = 0, pos = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                pos++;
            else
                neg++;
        }

        int operations = 0;
        int sum = pos - neg;

        if (sum < 0)
        {
            int need = (-sum + 1) / 2;
            operations += need;
            neg -= need;
            sum += need * 2;
        }

        if (neg % 2 == 1)
        {
            operations++;
        }

        cout << operations << "\n";
    }

    return 0;
}

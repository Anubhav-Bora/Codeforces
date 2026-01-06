#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> tools(n);
        for (int i = 0; i < n; i++)
            cin >> tools[i];

        long long count = b - 1;
        for (int i = 0; i < n; i++)
        {
            count += min(tools[i], a);
        }

        cout << count << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int k = d - b;
        if (k < 0)
        {
            cout << -1 << endl;
            continue;
        }
        int l = a + k - c;
        if (l < 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << k + l << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        long long add = 0;
        if (n % 4 == 1)
            add = n;
        else if (n % 4 == 2)
            add = -1;
        else if (n % 4 == 3)
            add = -(n + 1);
        if (x % 2 == 0)
            x -= add;
        else
            x += add;
        cout << x << endl;
    }
}
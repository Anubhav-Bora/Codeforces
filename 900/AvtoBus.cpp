#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n < 4 || n % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        long long maxi = n / 4;
        while (maxi >= 0 && (n - maxi * 4) % 6 != 0)
            maxi--;

        long long totalMaxi = maxi + (n - maxi * 4) / 6;

        long long mini = n / 6;
        while (mini >= 0 && (n - mini * 6) % 4 != 0)
            mini--;

        long long totalMini = mini + (n - mini * 6) / 4;

        cout << totalMini << " " << totalMaxi << endl;
    }
}

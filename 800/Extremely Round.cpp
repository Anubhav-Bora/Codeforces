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

        for (int powerOf10 = 1; powerOf10 <= n; powerOf10 *= 10)
        {
            for (int digit = 1; digit <= 9; digit++)
            {
                int extremelyRound = digit * powerOf10;
                if (extremelyRound <= n)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }

        cout << count << endl;
    }
}
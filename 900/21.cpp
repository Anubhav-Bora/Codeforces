#include <bits/stdc++.h>
using namespace std;

int movesToMakeSuffix(const string &s, char a, char b)
{
    int n = (int)s.size();
    for (int j = n - 1; j >= 0; --j)
    {
        if (s[j] != b)
            continue;
        for (int i = j - 1; i >= 0; --i)
        {
            if (s[i] == a)
            {
                return (n - 1 - j) + (j - 1 - i);
            }
        }
    }
    return (int)1e9;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int ans = (int)1e9;
        ans = min(ans, movesToMakeSuffix(s, '0', '0'));
        ans = min(ans, movesToMakeSuffix(s, '2', '5'));
        ans = min(ans, movesToMakeSuffix(s, '5', '0'));
        ans = min(ans, movesToMakeSuffix(s, '7', '5'));

        cout << ans << '\n';
    }
}

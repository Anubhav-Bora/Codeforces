#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int countAB = 0, countBA = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
                countAB++;
            if (s[i] == 'b' && s[i + 1] == 'a')
                countBA++;
        }
        if (countAB == countBA)
        {
            cout << s << '\n';
        }
        else
        {

            s[0] = s.back();
            cout << s << '\n';
        }
    }
}
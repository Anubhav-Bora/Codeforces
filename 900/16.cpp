#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;
        int ssize = s.size();
        int tsize = t.size();

        unordered_map<char, int> freq_t;
        for (int i = 0; i < tsize; i++)
        {
            freq_t[t[i]]++;
        }
        for (int i = ssize - 1; i >= 0; i--)
        {
            if (freq_t[s[i]] > 0)
            {
                freq_t[s[i]]--;
            }
            else
            {
                s[i] = '.';
            }
        }

        string res = "";
        for (int i = 0; i < ssize; i++)
        {
            if (s[i] != '.')
            {
                res += s[i];
            }
        }

        if (res == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
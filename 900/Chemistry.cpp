#include <bits./stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k == (n - 1))
        {
            cout << "Yes" << endl;
            continue;
        }
        unordered_map<char, int> freq;
        for (auto x : s)
        {
            freq[x]++;
        }
        int count = 0;
        for (auto &x : freq)
        {
            int val = x.second;
            if (val % 2 != 0)
            {
                count++;
            }
        }
        if (count <= k + 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
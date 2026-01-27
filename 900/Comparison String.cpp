#include <bits./stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = 1;
        int curr = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                curr++;
            else
                curr = 1;
            if (curr > maxi)
                maxi = curr;
        }
        cout << maxi + 1 << endl;
    }
}
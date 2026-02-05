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
        vector<int> a(n);
        int count = 0;
        bool allZero = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
            {
                allZero = false;
            }
        }
        if (allZero)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 0)
                {
                    while (a[i] != 0)
                    {
                        i++;
                    }
                    count++;
                }
            }
            if (count >= 2)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
}
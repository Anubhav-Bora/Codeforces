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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool allSame = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                allSame = false;
                break;
            }
        }
        if (allSame)
        {
            cout << "No" << endl;
        }
        else
        {
            sort(arr.begin(), arr.end(), greater<int>());
            if (arr[0] == arr[1])
            {
                swap(arr[0], arr[n - 1]);
            }

            cout << "Yes" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
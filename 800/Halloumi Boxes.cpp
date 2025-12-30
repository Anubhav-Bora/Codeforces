#include <iostream>
using namespace std;
#include <vector>
#include <limits.h>

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for ( int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (k > 1)// greater than 1 then we can get ir sorted using bubble sort always
        {
            cout << "YES\n";
            continue;
        }
        // check if the array is sorted or not
        bool flag = true;
        int prev = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < prev)
            {
                flag = false;
                break;
            }
            prev=arr[i];
        }
        if (flag == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
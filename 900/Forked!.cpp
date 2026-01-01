#include <bits./stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk; // position of king
        int xq, yq;
        cin >> xq >> yq;                // position of queen
        vector<pair<int, int>> moves = {// possible moves
                                        {a, b},
                                        {a, -b},
                                        {-a, b},
                                        {-a, -b},
                                        {b, a},
                                        {b, -a},
                                        {-b, a},
                                        {-b, -a}};
        set<pair<int, int>> k_positions;
        set<pair<int, int>> q_positions;
        for (auto move : moves)
        {
            k_positions.insert({xk + move.first, yk + move.second});
            q_positions.insert({xq + move.first, yq + move.second});
        }
        int count = 0;
        for (auto x : k_positions)
        {
            if (q_positions.count(x))
            {
                count++;
            }
        }
        cout << count << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    int operations=0;
    bool hasZero = false;
    int minOperations = INT_MAX ;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] == 0) {
            hasZero = true;
        } else {
            minOperations = min(minOperations, abs(A[i]));
        }
    }
    if (!hasZero) {
        operations = minOperations;
    }

    cout << operations << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    cin >> m >> n;

    string x;
    cin >> x;

    string s;
    cin >> s;

    bool found = false; 
    for(int i = 0; i <=5; i++){
        if(x.find(s) != string::npos){
            found = true;
            cout << i << endl;
            break;
        }
        x.append(x);
    }
    if(!found){
        cout << -1 << endl;
    }
}

int main(){
    int t;
    cin >> t; 
    while(t--){
        solve();
    }
}
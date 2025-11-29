#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    if(mp.size()>=3){
        cout<<"NO"<<endl;
    }
    else{
        if(abs(mp.begin()->second-mp.rbegin()->second)<=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
}
}
  
          
int main(){
     int t;
     cin>>t;
     while(t--){
        solve();
     }
}
#include<bits./stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      if(find(arr.begin(),arr.end(),k)!=arr.end()){
             cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
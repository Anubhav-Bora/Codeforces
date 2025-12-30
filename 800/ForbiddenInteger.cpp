#include<bits./stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(n%2==0 && k==2){
            cout<<"NO"<<endl;
            continue;
        }
        if(x!=1){
            cout<<"YES";
            cout<<"n";
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
            continue;
        }
        if(n%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }
            cout<<endl;
            continue;
        }
        if(n%2==1){
            cout<<"YES"<<endl;
            for(int i=0;i<n/2-1;i++){
                cout<<2<<" ";
            }
            cout<<3<<endl;
            continue;
        }

    }
}
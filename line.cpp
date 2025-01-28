#include<bits/stdc++.h>
using namespace std;
int main(){
    int time;
    cin>>time;
    while(time--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maximum = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            int A = arr[i]-j;
            maximum = max(A, maximum);
            j = arr[i];
        }
        int B = ((m-arr[n-1])*2);
        maximum = max(maximum,B);
        cout<<maximum;
        cout<<endl;
        
    }
}
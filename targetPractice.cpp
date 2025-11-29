#include<bits/stdc++.h>
using namespace std;

int solve(){
    int ans=0;
    int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
    };
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char ch;
            cin>>ch;
            if(ch!='.'){
                ans+=score[i][j];
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int result = solve();
        cout<<result<<endl;
    }
    return 0;
}
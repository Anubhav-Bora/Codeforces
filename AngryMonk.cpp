#include<bits./stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v(k);
		for(int i=0;i<k;i++) cin>>v[i];
		sort(v.begin(),v.end());
		cout<<((n-v[k-1])*1LL*2)-(k-1)<<endl;
	}
}
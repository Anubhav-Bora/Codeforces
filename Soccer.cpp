#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int flag=0;
        int x,y,a,b;
        cin>>x>>y>>a>>b;
      if((x>=y && a<=b) || (x<=y && a>=b)){
          cout<<"No"<<endl;
      }
      else{
          cout<<"Yes"<<endl;
      }
    }

    return 0;
}
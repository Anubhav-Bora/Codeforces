#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x=max(max(a,b),c)-min(min(a,b),c);
    cout<<x<<endl;
}
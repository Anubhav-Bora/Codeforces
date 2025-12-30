#include <iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> val;
    val["Tetrahedron"]  = 4;
	val["Cube"]         = 6;
	val["Octahedron"]   = 8;
	val["Dodecahedron"] = 12;
	val["Icosahedron"]  = 20;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        sum+=val[name];

    }
    cout<<sum<<endl;
}

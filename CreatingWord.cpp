#include <iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 cin.ignore();
 while(n--){
    string s;
    getline(cin,s);
    swap(s[0],s[4]);
    cout<<s<<endl;
 }
}
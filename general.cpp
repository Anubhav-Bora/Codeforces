 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n; 
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int minimum = INT_MAX, minPos = 0;
    int maximum = 0, maxPos = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > maximum){
            maximum = a[i]; 
            maxPos = i; 
        }
        if(a[i] <= minimum){
            minimum = a[i]; 
            minPos = i; 
        }
    }
    int ans;
    if(maxPos < minPos){
        ans = maxPos + (n - 1 - minPos);
    }
    else{
        ans = maxPos + (n - 1 - minPos) - 1;
    }
    cout<<ans<<endl;
    
 
    return 0;
}
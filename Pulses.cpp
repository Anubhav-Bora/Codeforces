#include<iostream>
using namespace std;
 
 
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long int a,b,c;
		cin>>a>>b>>c;
		for(int i=0;i<5;i++)
		{
		if(a<=b&&a<=c) a++;
		else if(b<=a&&b<=c) b++;
		else c++;	
		}
	printf("%lld\n",a*b*c);	
	}
	
} 
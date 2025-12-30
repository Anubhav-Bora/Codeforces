#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int y=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		y+=x;
		
	}
	
	if(y){
		cout<<"HARD"<<endl;
	}
	else {
		cout<<"EASY"<<endl;
	}

	return 0;
}
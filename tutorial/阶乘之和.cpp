#include<iostream>
using namespace std;
int main(){
	int n,sum=0,s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{s=1;
	for(int j=1;j<=i;j++)
	{ 
	s=s*j;
	}
	sum=sum+s;
	
	}
	
	
	cout<<sum;
	return 0;}

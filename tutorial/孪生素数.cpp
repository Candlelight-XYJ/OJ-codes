#include<iostream>
using namespace std;
int isprime(int n)
{int flag=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0) flag=0;
		
	}
	
	return flag;
		
} 
int main(){
int m,j=0;
cin>>m;
	for(int k=m;k>=2;k--)
	{
	while(j<2)
	{
		if(isprime(k)) {
		j++;cout<<k<<" ";break;}}
		
		
	}
	
	return 0;
	
	
}

#include<iostream>
using namespace std;
int f(int n)
{ int i,m=1;
for(i=1;i<=n;i++)
{
	m*=i;
	
}
	
return m;	
	
}
int main(){
	int n ;
	cin>>n;
	cout<<f(n); 
	return 0;
	
	
	
} 

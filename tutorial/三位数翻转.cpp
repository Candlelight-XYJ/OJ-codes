#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c;
	a=n%10;
	b=n/10%10;
	c=n/100;
	if(a==0) cout<<c+10*b;
	else cout<<a*100+c+10*b;
	return 0; 
	
	
	
}

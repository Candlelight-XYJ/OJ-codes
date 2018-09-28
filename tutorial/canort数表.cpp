#include<iostream>
using namespace std;
int main(){
	int n,s;
	cin>>n;
	int k=1;s=0;
	for(;;)
	{
	s=s+k;
	if(s>=n)
	{
		cout<<k-s+n<<"/"<<s-n+1<<endl;
		break;
	}	
		
	k++;
	}
	
	return 0;
	
}

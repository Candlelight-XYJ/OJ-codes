#include<iostream>
using namespace std;
int main(){
	int n=1,j=3;
	double s=0,i=1;
	while(i>=10e-6)
	{s=s+i*n;
	n=n*(-1);
	i=1.0/j;
	j=j+2;
	}
cout<<s*4;
return 0;
}

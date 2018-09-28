#include<iostream>
#include<cstring> 
using namespace std;
#define MAXN 10
int a[MAXN][MAXN];
int main()
{
	int x,y,n,tot=0;
	cin>>n;
	memset(a,0,sizeof(a));
	tot=a[x=0][y=n-1]=1;//这里来了个连续赋值
	while(tot<n*n)
	{
		while(x+1<n&&!a[x+1][y]) a[++x][y]=++tot;
		while(y-1>=0&&!a[x][y-1]) a[x][--y]=++tot;
		while(x-1>=0&&!a[x-1][y])  a[--x][y]=++tot;
		while(y+1<n&&!a[x][y+1])   a[x][++y]=++tot;
			} 
	
	
	
	
	
} 

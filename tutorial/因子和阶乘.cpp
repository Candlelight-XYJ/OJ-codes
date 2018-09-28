#include<iostream>
#include<cstring>
#include<cmath>//这个程序有问题！！我还没调好 
using namespace std;

int isprime(int n)
{int i,flag=1;
for(i=2;i<=floor(sqrt(n)+0.5);i++)
{if(n%i==0)
	{
	flag=0;break;}
}
	
	
	return flag;
	
} 
//判断素数 

int prime[100];//构造素数表 

int main(){
int count=0, n,p[100];//p要用来存放指数
for(int i=2;i<=100;i++)
{
if(isprime){prime[count++]=i;}//构造素数表
}
while(cin>>n)
{memset(p,0,sizeof(p));


int maxp=0;
for(int i=1;i<=n;i++)
{
	int m=i;//m的值会被修改所以i要赋值给m ,不然i被改了就不好整了！！ 
	for(int j=0;j<count;j++)
	{
		while(m%prime[j]==0)
		{
			m=m/prime[j];
			p[j]++;
			if(j>maxp) maxp=j;
			
			
		}
		
		
	}
	}

	for(int k=0;k<=maxp;k++)
	cout<<p[k]<<" "<<endl;
	}

	
 
 return 0;
 
 } 



 

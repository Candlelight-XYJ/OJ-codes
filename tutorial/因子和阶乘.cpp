#include<iostream>
#include<cstring>
#include<cmath>//������������⣡���һ�û���� 
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
//�ж����� 

int prime[100];//���������� 

int main(){
int count=0, n,p[100];//pҪ�������ָ��
for(int i=2;i<=100;i++)
{
if(isprime){prime[count++]=i;}//����������
}
while(cin>>n)
{memset(p,0,sizeof(p));


int maxp=0;
for(int i=1;i<=n;i++)
{
	int m=i;//m��ֵ�ᱻ�޸�����iҪ��ֵ��m ,��Ȼi�����˾Ͳ������ˣ��� 
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



 

#include<iostream>
#include<cstring> //˼·��ʵ�Ѿ���������Ŀ���ˣ�����һ������
		//,Ȼ����������������ڿ϶���������������
		//Ȼ�����С�Ŀ�ʼ���������б���ʱ�������
		//ÿ��������������͵�һ��������ͬ��
		//����������ڣ������ڿ϶�����С�ġ�
using namespace std;
int main(){
	char word[100];
	cin>>word;
	int len=strlen(word);
	for(int i=1;i<=len;i++)
	{
         int ok=1;		
		if(len%i==0)
		{
			for(int j=i;j<len;j++)
			{ if(word[j]!=word[j%i]) {
			ok=0;break;}} 
			
			if(ok)
		{	cout<<i;return 0;} 
			
			
			} 
			
			
			
		}
		
		
		
		
	}
	
	
	


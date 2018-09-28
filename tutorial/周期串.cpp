#include<iostream>
#include<cstring> //思路其实已经体现在题目中了，假设一个周期
		//,然后满足的条件是周期肯定被串长度整除，
		//然后从最小的开始遍历，其中遍历时满足后面
		//每个周期里的数都和第一个周期相同，
		//就输出该周期，该周期肯定是最小的。
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
	
	
	


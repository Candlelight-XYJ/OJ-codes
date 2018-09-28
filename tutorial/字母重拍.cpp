#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;


int n;
char word[2000][10],sorted[2000][10];

int cmp_char(const void*_a,const void*_b)
{
	char* a=(char*)_a;
	char* b=(char*)_b;
	return *a-*b;
	
}//字符比较函数 

int cmpstring(const void*_a,void*_b)
{
	char* a=(char*)_a;
	char* b=(char*)_b;
	return strcmp(a,b);
	
}
//字符串比较函数 


int main(){
	
	n=0;
	for(;;)
	{
		cin>>word[n];
		if(word[n][0]=='*') break;
		n++;
		
	}
	qsort(word,n,sizeof(word[0]),cmpstring);
	 for(int i=0;i<n;i++)
	 {
	 	strcpy(sorted[i],word[i]);//每个单词排序
		 qsort(sorted[i],strlen(sorted[i]),sizeof(char),cmp_char) ;
	 	
	 	
	 }
	
	char s[10];
	while(cin>>s)
	{
		qsort(s,strlen(s),sizeof(char),cmp_char);
		int found=0;
		for(int i=0;i<n;i++)
		if(strcmp(sorted[i]),s)==0){
			
			found=1;
			cout<<word[i];
		}
		if(!found) cout<<":(";
		cout<<endl;}
		
		
		return 0;}
		
		
		
	}
	
	
	
	
	
}

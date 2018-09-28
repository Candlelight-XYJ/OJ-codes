#include<iostream> 
#include<stdio.h> 
using namespace std;
int main(){
	char s[]="1,2,3,4,5,6,7,8,9,0,-,=,q,w,e,r,t,y,u,i,o,p,[,],a,s,d,f,g,h,j,k,l,z,x,c,v,b,n,m";
	 int c ,i;
	 while((c=getchar())!=EOF)
	 for(i=0;s[i]!=0&&s[i]!=c;i++);
	 if(s[i]) putchar(s[i-1]);
	 else putchar(c);
	 return 0;}



 

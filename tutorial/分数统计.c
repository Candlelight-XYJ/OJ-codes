#include <stdio.h>
 #include <string.h> 
 int main()
  {  int i,a[101],n,max; 
 memset(a,sizeof(a),0);
   
  
  while(scanf("%d",&n)==1)  {   
a[n]++; 
 
}  
for(i=1;i<101;i++)
  {   if(a[i]>=max)   
  {    max=a[i]; 
  } 
 } 
 for(i=0;i<101;i++) 
  {   if(a[i]==max) 
    {    printf("%d ",i);  
	 } 
 } 
 printf("\n");
   return 0; 
} 

#include<iostream>
#include<cmath> 
using namespace std;/* floor函数 编辑  

floor(x),有时候也写做Floor(x)，其功能是“向下取整”，或者说“向下舍入”，即取不大于x的最大整数（与“四舍五入”不同，
下取整是直接取按照数轴上最接近要求的值左边的值，
也就是不大于要求的值的最大的那个）。例如floor（9.99）=9 */ 
int main(){
	
	int a, b,n;
	double m;
	for(a=1;a<=9;a++)
	{for(b=0;b<=9;b++){
		n=a*1100+b*11;
		m=sqrt(n);
		if(floor(m+0.5)==m){
		 cout<<n;}//floor(m+0.5)相当于对m进行了四舍五入 
	}
	return 0; 
	}
	
	
	
}

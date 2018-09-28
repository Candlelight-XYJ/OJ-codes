#include<iostream>
using namespace std;
int main(){
	float i =0,j=1;
	cout<<j/i;/* 注意注意  两个浮点数1除以0，得到的是无穷大inf，因为在浮点数里面0只是一个无限接近于
	 0的数，而在整数里0才代表0，所以整数除法1/0 会得到 报错！*/ 
	
	
	return 0;
} 

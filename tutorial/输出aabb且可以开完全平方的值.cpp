#include<iostream>
#include<cmath> 
using namespace std;/* floor���� �]�༭  

floor(x),��ʱ��Ҳд��Floor(x)���书���ǡ�����ȡ����������˵���������롱����ȡ������x������������롰�������롱��ͬ��
��ȡ����ֱ��ȡ������������ӽ�Ҫ���ֵ��ߵ�ֵ��
Ҳ���ǲ�����Ҫ���ֵ�������Ǹ���������floor��9.99��=9 */ 
int main(){
	
	int a, b,n;
	double m;
	for(a=1;a<=9;a++)
	{for(b=0;b<=9;b++){
		n=a*1100+b*11;
		m=sqrt(n);
		if(floor(m+0.5)==m){
		 cout<<n;}//floor(m+0.5)�൱�ڶ�m�������������� 
	}
	return 0; 
	}
	
	
	
}

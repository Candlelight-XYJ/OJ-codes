#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	ofstream out("grade");
	if(!out)
	{cout<<"cannot open it"<<endl;
	return 1;
	}
	out<<"C++"<<" "<<12.3<<endl;
	out<<"B++"<<" "<<34.4<<endl;
	out.close();
	
	
	
	
	return 0;
	
}

#include <iostream>
#include<cstring> 
using namespace std;
int main(){
    char word[81];
    cin>>word;
    int len = strlen(word);
    //cout<<len<<endl;
    for(int i=1;i<=len;i++){  //��������Ϊ1�����Դ�1��ʼ
        int ok=1;             //ok��ʾ�����Ƿ����
        if(len%i==0){
            //cout<<"i "<<i<<endl;
            for(int j=i;j<len;j++){
                if(word[j]!=word[j%i]) {ok=0;break; }
            }
            if(ok){ cout<<i<<endl; return 0;}
        }

    }
}

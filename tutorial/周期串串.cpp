#include <iostream>
#include<cstring> 
using namespace std;
int main(){
    char word[81];
    cin>>word;
    int len = strlen(word);
    //cout<<len<<endl;
    for(int i=1;i<=len;i++){  //周期起码为1，所以从1开始
        int ok=1;             //ok表示周期是否成立
        if(len%i==0){
            //cout<<"i "<<i<<endl;
            for(int j=i;j<len;j++){
                if(word[j]!=word[j%i]) {ok=0;break; }
            }
            if(ok){ cout<<i<<endl; return 0;}
        }

    }
}

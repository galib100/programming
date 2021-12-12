#include<bits/stdc++.h>
using namespace std;
int main(){
int co=0,j=7;
for(int i=1;i<=9;){
    cout<<"I="<<i<<" J="<<j<<endl;
    co++;
    j--;

    if(co==3){
        i=i+2;
        j=j+5;
        co=0;
    }
    if(i==9&&co==3){
        break;
    }
}
return 0;
}

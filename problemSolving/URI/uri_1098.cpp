#include<bits/stdc++.h>
using namespace std;
int main(){
int co=0;
float j=1;
for(float i=0;i<=2.2;){
    cout<<"I="<<i<<" J="<<j<<endl;
    co++;
    j++;

    if(co==3){
            j=1;
        i=i+0.2;
        j=j+i;
        co=0;
    }
    if(i==2&&co==3){
//         cout<<"I="<<i<<" J="<<j<<endl;
        break;
    }
}
return 0;
}


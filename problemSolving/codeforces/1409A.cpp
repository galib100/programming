#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long t,a,b,dif=0,c=0;
   cin>>t;
    while(t--){
       cin>>a>>b;
       while(a!=b){
         if(b>a) {
        dif = b-a;
        if(dif>=10){
        a = a+10;
        }
        else {a = a+dif;}
       }else{
       dif = a-b;
       if(dif>=10){
        a = a-10;
        }
        else {a = a-dif;}
       }
       c++;
       }
       cout<<c<<endl;
       c=0;
    }

return 0;
}



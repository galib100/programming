#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
long long n,vs,c=0;
string  ans="";
cin>>n;
     for(int i=0; n>0;i++){
    vs = n%10;
if(vs==7 || vs ==4){
    c++;
}
n = n/10;

}
//4cout<<"c= "<<c<<endl;
vs =0;
if(c==0){
    ans ="NO";
}
   for(int i=0; c>0;i++){
    vs = c%10;
if(vs==7 || vs ==4){

     c = c/10;
     ans ="YES";
}
else{
    ans ="NO";
    break;
}
   }
cout<<ans<<endl;
return 0;
}

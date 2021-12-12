#include<iostream>

#include<bits/stdc++.h>
using namespace std;
int main(){
 string ans="";
 long long  vs =0;
 long long n;
 cin>>n;

 if(n%4==0 || n%7==0 || n%47==0){
    ans ="YES";
 }
 else{

     for(int i=0; n>0;i++){
    vs = n%10;
if(vs==7 || vs ==4){
    ans = "YES";
     n = n/10;
}
else{
        ans ="NO";
break;
}

 }

 }
 cout<<ans<<endl;

}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  
    long long m,n,a,s;
    scanf("%lld %lld %lld",&m,&n,&a);
    // cin>>m>>n>>a;
    long long sum1 =0,cnt1 =0 ;
    while(sum1<m){
     sum1 += a;
      cnt1 ++; 
        }
       long long sum =0, cnt = 0;
       
  while(sum<n){
     sum += a;
      cnt ++; 
        }
        s = (cnt*cnt1);
 printf("%lld",s);
   return 0;
}
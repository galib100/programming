#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,n,w,total=0,lagbe=0;
    // k= banana dam 
    // n= tk ache
    // w= num of banana;
    // 1 2 1

    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        total +=(i*k);
    }
    if(total>n){
          lagbe= total -n;
    }
  
cout<<lagbe<<endl;
    return 0;
}
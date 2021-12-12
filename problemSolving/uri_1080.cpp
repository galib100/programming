#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i,a,h=0,p;
  for(i=1; i<=100;i++){
      cin>>a;
      if(h<a){
         h=a;
         p=i;
      }
  }
  cout<<h<<endl;
      cout<<p<<endl;
    return 0;
   }

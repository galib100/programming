#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i,n;
  cin>>n;
  for(i=0; i<=10000; i++){
      if(i%n == 0){
          cout<<i+2<<endl;
      }
  }
  
    return 0;
   }

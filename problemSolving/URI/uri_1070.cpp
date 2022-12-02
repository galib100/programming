#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i,x,c=0;
  cin>>x;
  i=x;
  while(c!=6){
    if(i%2!=0){
        cout<<i<<endl;
        c++;
    }
     i++;
  }
    
    
    return 0;
   }

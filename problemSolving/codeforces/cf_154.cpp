#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   int i=0,j=0;
   while(i<n ||j<m){
       if(i<n){
      cout<<'B';
       i++;
       }
      
       if(j<m){
           cout<<'G';
            j++;
       }
     
      
   }    
    return 0;
}
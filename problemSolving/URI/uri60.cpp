#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
       int i,c=0;
       double a;
       for(i=0;i<6;i++){
           cin>>a;
           if(a>0){
               c++;
           }
       }
       cout<<c<<" valores positivos"<<endl;
 return 0;
   }

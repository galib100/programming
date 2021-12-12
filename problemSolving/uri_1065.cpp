#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i,a,c=0;
      for(i=0;i<5;i++){
           cin>>a;
           if(a%2 == 0){
               c++;
           }
      }
      
       printf("%d valores pares\n",c);
 return 0;
   }

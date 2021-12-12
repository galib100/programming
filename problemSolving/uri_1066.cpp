#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i,a,pc=0,nc=0,oc=0,evc=0;
      for(i=0;i<5;i++){
           cin>>a;
           if(a%2 == 0){
               evc++;
           }
         if(a%2!= 0){
               oc++;
           }
         if(a>0){
               pc++;
           }
         if(a<0){
               nc++;
           }
      }
      
        cout<<evc<<" valor(es) par(es)"<<endl;
    cout<<oc<<" valor(es) impar(es)"<<endl;
    cout<<pc<<" valor(es) positivo(s)"<<endl;
    cout<<nc<<" valor(es) negativo(s)"<<endl;
    return 0;
   }

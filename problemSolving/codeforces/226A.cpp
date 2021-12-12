#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    char a[50];
      for(int i=0; i<n; i++){
          cin>>a[i];
      }
   for(int i=0; i<n; i++){
       char tem= a[i];
      
           if(tem == a[i+1]){
               c++;
       }
   }
   cout<<c<<endl;
   return 0;
}
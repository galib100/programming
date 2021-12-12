#include<iostream>
#include<stdio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[99];
   cin>>a;
  int size = strlen(a);

for(int i=0; i<size-1; i++){
   
    for(int j=0; j<size-i-1; j++){
       

         if(a[j]>a[j+1]){
           int tem = a[j];
            a[j]=a[j+1];
            a[j+1]=tem;
        }
 }
    

}
//print  the array 
for(int k=0; k<size; k++){
    cout<<a[k]<<" ";
}
    return 0;
}


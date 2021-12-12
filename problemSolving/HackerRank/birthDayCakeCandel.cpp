#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

int arr[100000];
int n;
cin>>n;
int temp =0,hC = 0;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
temp =arr[0];
for(int i=0; i<n; i++){
    if(temp <arr[i]){
        temp = arr[i];
    }
}
for(int i=0; i<n; ++i){
    if(arr[i]==temp ){
        hC++;
    }
}
cout<<hC<<endl;


return 0;
}

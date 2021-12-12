#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int  t,n,arr[100];

cin>>t;
while(t--){
        cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int j=n-1; j>=0; j--){
        cout<<arr[j]<<" ";
    }
cout<<"\n";
}
return 0;
}

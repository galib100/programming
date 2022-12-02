#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0,i=0,temp=0,arr[50];
cin>>n;
while(--n){
        if(i==0){
            arr[i]=0;
            cout<<arr[i]<<" ";
        i++;
        }
        else{
            arr[i]=arr[i]+arr[i-1];
          cout<<arr[i]<<" ";
          i++;
        }

}



}

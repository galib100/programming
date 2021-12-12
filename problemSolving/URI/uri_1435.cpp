#include<bits/stdc++.h>
using namespace std;
int main(){

 while(1){
     int n;
 cin>>n;
 if(n==0){
    break;
 }

 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"1 ";
    }
    cout<<endl;
 }

 cout<<endl;
 cout<<endl;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || i==n){
             cout<<"1 ";
        }
        else if(i>1 && j>1&&j<n){
            cout<<n-i<<" ";
        }
        else {
            cout<<"1 ";
        }

    }
    cout<<endl;
 }
 }

return 0;
}




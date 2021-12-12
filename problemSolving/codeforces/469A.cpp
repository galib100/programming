#include<bits/stdc++.h>
using namespace std;
int main(){
int n,p,q,arr[100],brr[100];
cin>>n;
for(int i=0;i<n;i++){
    cin>>brr[i];
}
cin>>p;
for(int i=0;i<p;++i){
    cin>>arr[i];
}
cin>>q;
n=p+q;
int i=p;
while(q--){
        cout<<"q: "<<q<<endl;
  cin>>arr[i];
   i++;
}
for(int i=0;i<n;++i){
    cout<<arr[i]<<" ";
}
int c=0;
for(int i=0;i<=n;i++){
    for(int j=0;j<n;j++){
        if(arr[i]==brr[j]){
            c==1;
        }
    }
}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,aa[100];
    cin>>n;
for(int i=1;i<=n;i++){
    cin>>aa[i];
}
int c=0,temp=aa[1];
for(int i=1;i<=n;i++){
    if(temp ==aa[i] && temp == aa[i+1]){
    temp =aa[i];
    break;
    }
    else{
        temp=aa[i];
    }
}
for(int i=1;i<=n;i++){
if(temp !=aa[i]){
    c=i;
}
}
cout<<c<<endl;
}
return 0;
}

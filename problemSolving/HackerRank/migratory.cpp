#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
ll n;
cin>>n;
ll arr[n];

for(ll i=0;i<n;i++){
    cin>>arr[i];
}
ll ans=0,temp =0;;
for(ll i=0;i<n;i++){
        ll c=0;
    for(ll j=0;j<n;j++){
    if(arr[i]==arr[j]){
        c++;
    }
    }
    if(c>temp){
        temp =c;
        ans = arr[i];
    }
    else if(c==temp){
        if(arr[i-1]>arr[i]){
            ans= arr[i];
        }else{
        ans=arr[i-1];
        }
    }
    else{
    break;
    }
//    cout<<"c= "<<c<<"  temp ="<<temp<<endl;
//    cout<<"The Number "<<arr[i]<<"is :"<<c<<endl;
//    c=0;
//        cout<<"ans: "<<ans<<endl;
}
cout<<ans<<endl;
return 0;
}

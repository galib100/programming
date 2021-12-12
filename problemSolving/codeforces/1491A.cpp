#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,q;
cin>>n>>q;
long long int  arr[n];
for(long long int i=1;i<=n;i++){
    cin>>arr[i];
}

while(q--){
    int t;
    long long int x,k;
    cin>>t;
    if(t==1){
        cin>>x;

    arr[x] = 1-arr[x];

    }
    else if(t==2){
        cin>>k;
        sort(arr,arr+n,greater<int>());
        cout<<arr[k]<<endl;

    }
}
return 0;
}

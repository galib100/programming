#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
ll n,scC=0;
cin>>n;

for(ll i=1;i<=n;i++){
    if((sqrt(i)*sqrt(i))==i || (cbrt(i)*cbrt(i)*cbrt(i))==i){
       scC++;
    }
}
cout<<scC<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }


return 0;
}


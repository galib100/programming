
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
ll n;
cin>>n;
    if(n%7==0){
    cout<<n<<endl;
    }else{
    ll m = n/7;
    cout<<(m+1)*7<<endl;
    }


}


int main(){
ll t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}


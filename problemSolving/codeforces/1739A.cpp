#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n<5 || m<5){
            cout<<n/2+1 <<" "<<m/2+1<<endl;
        }else if(n>=5 && m>=5){
            cout<<n/2<<" "<<m/2<<endl;
        }
    }

}


int main()
{

    solve();
    return 0;
}



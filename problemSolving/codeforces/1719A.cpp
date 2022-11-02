#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
void solve()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n%2==0 && m%2==0){
            cout<<"Tonya"<<nl;
        }else if(n%2==0 && m%2!=0){
            cout<<"Burenka"<<nl;
        }else if(n%2!=0 && m%2!=0){
            cout<<"Tonya"<<nl;
        }else{
            cout<<"Burenka"<<nl;
        }
    }


}


int main()
{
fastio;



    solve();
    return 0;
}



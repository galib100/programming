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
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b==c) || (a+c==b) || (b+c==a )){
            cout<<"YES"<<nl;
        }else{
            cout<<"NO"<<nl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}



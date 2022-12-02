#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll s=a+b+c;
        ll mx =max(a,max(b,c));
        ll mn=min(a,min(b,c));
        cout<<s-mx-mn<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}



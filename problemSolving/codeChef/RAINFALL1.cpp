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
        ll n;
        cin>>n;
        if(n<3){
            cout<<"LIGHT"<<nl;
        }else if(n>=3 && n<7){
            cout<<"MODERATE"<<nl;
        }else {
            cout<<"HEAVY"<<nl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}



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
        ll n;
        cin>>n;
        if(n<=1399)
        {
            cout<<"Division 4"<<nl;
        }
        else if(n<=1599 && n>=1400)
        {
            cout<<"Division 3"<<nl;
        }
        else if(n<=1899 && n>=1600)
        {
            cout<<"Division 2"<<nl;
        }
        else
        {
            cout<<"Division 1"<<nl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}




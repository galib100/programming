// Problem: Apples and oranges
// Contest: CodeChef - START72D
// URL: https://www.codechef.com/START72D/problems/APPLEORANGE
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
		ll n,m;
		cin>>n>>m;
		 cout<<__gcd(n,m)<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


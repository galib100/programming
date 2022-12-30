// Problem: A. Cut the Triangle
// Contest: Codeforces - Educational Codeforces Round 140 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1767/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms

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
    	string ans ="YES";
    	ll x;
    	// cin>>x;
    	ll xa,xb,xc,ya,yb,yc;
    	cin>>xa>>ya;
    	cin>>xb>>yb;
    	cin>>xc>>yc;
    	    	if((xa==xb || xb==xc || xa==xc) && (ya==yb || yb==yc || ya==yc)){
    	    		ans="NO";
    	    	}
    	    	cout<<ans<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


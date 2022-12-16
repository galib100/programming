// Problem: A. Burenka Plays with Fractions
// Contest: Codeforces - Codeforces Round #815 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1720/A
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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		  int ans =0;
		if(a/b == c/d){
			ans =0;
		}else {
			if(((a/b)%(d/c)==0) || ((c/d)%(b/a)==0)){
				ans=1;
			}else {
				ans =2;
			}
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


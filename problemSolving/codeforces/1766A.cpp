// Problem: A. Extremely Round
// Contest: Codeforces - Educational Codeforces Round 139 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1766/problem/0
// Memory Limit: 512 MB
// Time Limit: 3000 ms

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
		ll ans=0;
		if(n<=10){
			ans = n;
		}else if(n<=100) {
			ans =9 + n/10;
		}else if(n<=1000){
			ans= 18 +( n/100);
		}else if(n<=10000){
			ans= 27 +( n/1000);
		}else if(n<=100000){
			ans= 36 +( n/10000);
		}else if(n<=1000000){
			ans= 45 +( n/100000);
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


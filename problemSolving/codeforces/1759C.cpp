// Problem: C. Thermostat
// Contest: Codeforces - Codeforces Round  #834 (Div. 3)
// URL: https://codeforces.com/contest/1759/problem/C
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
		ll l,r,x;
		cin>>l>>r>>x;
		ll a,b;
		cin>>a>>b;
		if(a==b){
			cout<<0<<nl;
		}else if(a<b){
			if(abs(a-b)>=x) cout<<1<<nl;
			else if(((b+x)<=r)||((a-x)>=l)){
				cout<<2<<nl;
			}else if((b-x>=l && a+x<=r && abs(a+x-b+x)>=x))cout<<3<<nl;
			else cout<<-1<<nl;
		}else{
			//a>b
			if(abs(a-b)>=x) cout<<1<<nl;
			else if(a+x<=r && b-x>=l)cout<<2<<nl;
			else if(b+x<=r && (a-x)>=l && abs(a-x-b-x)>=x)cout<<3<<nl;
			else cout<<-1<<nl;
		}

}
}


int main()
{
    fastio;



    solve();
    return 0;
}



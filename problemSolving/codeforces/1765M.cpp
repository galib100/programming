// Problem: M. Minimum LCM
// Contest: Codeforces - 2022-2023 ICPC, NERC, Southern and Volga Russian Regional Contest (Online Mirror, ICPC Rules, Preferably Teams)
// URL: https://codeforces.com/problemset/problem/1765/M
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
		ll n;
		cin>>n;
		ll t =n-1;
		ll a1=n;
		ll a2=n;
		for(int i=1;i<n/2;i++){
					
			cout<<i<<" "<<t<<nl;
		}
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


// Problem: B. New Year's Number
// Contest: Codeforces - Codeforces Round #697 (Div. 3)
// URL: https://codeforces.com/contest/1475/problem/B
// Memory Limit: 256 MB
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
		string ans ="NO";
		ll temp = n/2020;
		if(n%2020==0 || n%2021==0){
			ans ="YES";
		}else{
			if(n%2020<=temp){
				ans ="YES";
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


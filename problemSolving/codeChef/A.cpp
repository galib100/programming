// Problem: A. Lucky Numbers
// Contest: Codeforces - Codeforces Round 861 (Div. 2)
// URL: https://codeforces.com/contest/1808/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time:2023-03-30 10:10:31


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;++i)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define pp pop_back
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
#define all(a) a.begin(),a.end()
const int N=10e7+10;
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
		ll l,r;
		cin>>l>>r;
		ll mx=-1;
		 
		ll ans=0;
		for(int i=l; i<=r;++i){
			 string ss=to_string(i);
			 
			 int val = (*max_element(all(ss)))-(*min_element(all(ss)));
			 if(val>mx){
			 	mx=val;ans=i;
			 	}
			 
			 if(mx==9) break;
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


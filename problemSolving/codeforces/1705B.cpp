// Problem: B. Mark the Dust Sweeper
// Contest: Codeforces - Codeforces Round 807 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1705/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// Time:2023-03-19 08:50:53


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;++i)
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
 
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
		vector<int>v;
		f(i,n){
			ll a;
			cin>>a;
			v.pb(a);
		}
		int zc=0;
		bool numP=false;
		ll sum=0;
		f(i,n-1){
			if(v[i]>0){
				numP=true;
			}else if(v[i]==0 && numP){
				zc++;
			}
			sum+=v[i];
		}
		cout<<sum+zc<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


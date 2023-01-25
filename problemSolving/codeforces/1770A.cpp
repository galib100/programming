// Problem: A. Koxia and Whiteboards
// Contest: Codeforces - Good Bye 2022: 2023 is NEAR
// URL: https://codeforces.com/contest/1770/problem/A
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
		vector<int>v;
		ll arr[n+10];
		ll arrm[m+10];
		f(i,n){
			cin>>arr[i];
			// v.push_back(arr[i]);
		}
		f(i,m){
			cin>>arrm[i];
			// v.push_back(arrm[i]);
		}
		
		 
		 
		for(int i=0;i<n;++i){v.push_back(arr[i]);}
		for(int i=0;i<m;++i){v.push_back(arrm[i]);}
		sort(v.begin(),v.end()-1);
		reverse(v.begin(),v.end());
		
		ll sum = 0;
		 
			 for(int i=0;i<n;++i){
			 	sum+=v[i];
			 }
		
		
		 cout<<sum<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


// Problem: B. Doremy's Perfect Math Class
// Contest: Codeforces - Codeforces Global Round 24
// URL: https://codeforces.com/problemset/problem/1764/B
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
		ll n;
		cin>>n;
		vector<int>v;
		f(i,n){
			ll a;
			cin>>a;
			v.push_back(a);
			
		}
		// sort(v.begin(),v.end());
		ll ans=n;
		for(int i=0;i<v.size()-1;++i){
			for(int j=i+1;j<v.size();++j){
				// cout<<v[i]-v[j]<<nl;
				ll a,b;
				a=max(v[i],v[j]); b =min(v[i],v[j]);
				if(v[i]!=v[j] && count(v.begin(),v.end(),(a-b))==0){
					v.push_back(a-b);
					// cout<<a-b<<nl;
				}
			}
		}
		cout<<v.size()<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


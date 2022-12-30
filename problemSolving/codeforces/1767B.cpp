// Problem: B. Block Towers
// Contest: Codeforces - Educational Codeforces Round 140 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1767/problem/B
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
		// vector<int>v;
		ll v[n+10];
		f(i,n)  {
		 
			cin>>v[i]; 
			// v.push_back(x);
			}
			ll sum=v[0];
			sort(v,v+n);			 
					 for(int i=0;i<n;++i){
						
						if(sum<v[i]){
							// sum+=(v[i]-sum+1)/2;
							if(v[i]-sum ==1){
								sum+=1;
							}
							else if((v[i]-sum)%2==0){
								sum+= (v[i]-sum)/2;
							}else{
								sum+= (v[i]-sum)/2 +1;
							}
							
						}
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


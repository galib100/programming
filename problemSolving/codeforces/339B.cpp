// Problem: B. Xenia and Ringroad
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/B
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
    
    	ll n,m;
    	cin>>n>>m;
    	ll arr[m+10];
    	f(i,m){
    		 cin>>arr[i];
    	}
    	ll c =1;
    	 
    	ll ans= 0;
    	f(i,m){
    		if(c<=arr[i]){
    			ans+=(arr[i]-c);
    		}else {
    			ans+= n-(c-arr[i]);
    		}
    		c=arr[i];
    	}
    	cout<<ans<<nl;
    	
    

}


int main()
{
    fastio;



    solve();
    return 0;
}


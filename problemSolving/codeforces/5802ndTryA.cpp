// Problem: A. Kefa and First Steps
// Contest: Codeforces - Codeforces Round #321 (Div. 2)
// URL: https://codeforces.com/problemset/problem/580/A
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
    ll arr[t+10];
    f(i,t){
    	cin>>arr[i];
    }
    ll c=1;
    ll ans =1;
    f(i,t-1){
    	if(arr[i]<=arr[i+1]){
    		c++;
    	}else{
    		
    		c=1;
    	}
    	ans = max(ans,c);
    }
    cout<<ans<<nl;
}


int main()
{
    fastio;



    solve();
    return 0;
}


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
    	vector<int>vN(n);
    	vector<int>vM(m);
    	
    	f(i,n){
    			cin>>vN[i];
    	}
    	
    	f(i,m){
    			cin>>vM[i];
    	}
    	
	sort(vN.begin(),vN.end());
	f(i,n){
    			cout<<vN[i]<<" ";
    	}
cout<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


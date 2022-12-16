// Problem: A. Game With Sticks
// Contest: Codeforces - Codeforces Round #258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/A
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
     
		ll n,m;
		cin>>n>>m;
		ll mn  =min(n,m);
		if(mn%2==0) cout<<"Malvika"<<nl;
		else cout<<"Akshat"<<nl;
	    

}


int main()
{
    fastio;



    solve();
    return 0;
}


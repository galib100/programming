// Problem: A. Even Odds
// Contest: Codeforces - Codeforces Round #188 (Div. 2)
// URL: https://codeforces.com/problemset/problem/318/A
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
    ll n,k;
    cin>>n>>k;
	ll d;
	if(n%2==0){
		d=n/2;//5
	}else d=n/2+1;
	if(k>d){
		d = k-d;
		 cout<<d*2<<nl;
	}else{
		cout<<k*2 -1<<nl;
	}
	 

}


int main()
{
    fastio;



    solve();
    return 0;
}


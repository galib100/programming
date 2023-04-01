// Problem: A. Exponential Equation
// Contest: Codeforces - TypeDB Forces 2023 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1787/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time:2023-01-29 20:45:18


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
			 n%2==0?cout<<n/2<<" "<<1<<nl:cout<<-1<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


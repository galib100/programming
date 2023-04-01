// Problem: Chef Eren
// Contest: CodeChef - START83D
// URL: https://www.codechef.com/START83D/problems/CHEFEREN
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time:2023-03-29 22:09:32


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;++i)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define pp pop_back
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
const int N=10e7+10;
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
		ll n,a,b;
		cin>>n>>a>>b;
		if(n%2==0){
			cout<<(n/2)*a+(n/2)*b<<nl;
		}else{
			cout<<(n/2)*a+((n/2)+1)*b<<nl;
		}
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


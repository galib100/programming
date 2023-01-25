// Problem: Indivisible
// Contest: CodeChef - START72D
// URL: https://www.codechef.com/START72D/problems/INDIVISIBLE
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
		ll a,b,c;
		cin>>a>>b>>c;
		for(int i =2;i<100;i++){
			if(a%i!=0 && b%i!=0 && c%i!=0){
				cout<<i<<nl;
				break;
			}
		}
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


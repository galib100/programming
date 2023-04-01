// Problem: B. Taisia and Dice
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time:2023-01-27 20:52:34


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
		ll n,s,r;
		cin>>n>>s>>r;
		int last=s-r;
		int nn = r/(n-1);
		int cc=r%(n-1);
		
		f(i,n-1){
			if(cc!=0){cout<<nn+1<<" ";
			cc--;
			}else{
				cout<<nn<<" ";
			}
		}
		cout<<last<<nl;
		
		
		 
		
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


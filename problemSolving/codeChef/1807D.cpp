// Problem: D. Odd Queries
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Time:2023-03-20 08:31:55


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;++i)
#define f1(i,n) for(int i=1;i<=n;++i)
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
	ll n,q;
	cin>>n>>q;
	ll arr[n+10];
	ll sumA[n+10];
	ll sum=0;
	f1(i,n){
		cin>>arr[i];
		  
	}

	// f1(i,n){
		// cout<<sumA[i]<<" ";
// 		
	// }cout<<nl;
	// cout<<"sum= "<<sum<<nl;
		f1(i,q){
			ll l,r,k;
			cin>>l>>r>>k;
			ll dsum=sum-(sumA[r]-sumA[l-1])+(r-l+1)*k;
			if(l==1){
			 dsum=sum-(sumA[r])+(r-l+1)*k;

			}
			if(dsum%2!=0){
				yes;
			}else{
				no;
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


// Problem: A. Everybody Likes Good Arrays!
// Contest: Codeforces - Codeforces Round #845 (Div. 2) and ByteRace 2023
// URL: https://codeforces.com/contest/1777/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time:2023-01-21 20:42:53


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
		ll arr[n+10];
		f(i,n){
			cin>>arr[i];
		}
		ll c=0;
		f(i,n-1){
			if((arr[i]%2==0 && arr[i+1]%2==0)|| (arr[i]%2!=0 && arr[i+1]%2!=0)){
					c++;
					arr[i+1] = arr[i] * arr[i+1];
			}
		}
		cout<<c<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


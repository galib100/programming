// Problem: A. Odd Divisor
// Contest: Codeforces - Codeforces Round #697 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1475/A
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
    while(t--)
    {
		ll n;
		cin>>n;
		string ans ="NO";
		  if(n%2!=0 ){
			ans="YES";
		}else {
			if(n==2){
				ans="NO";
			}
			ll temp =n/2;
			 while(temp>2){
				if(temp%2 !=0){
					ans="YES";
					break;
				}else{
					temp = temp/2;
				}
			 }
		}
		cout<<ans<<nl;
		}
    

}


int main()
{
    fastio;



    solve();
    return 0;
}


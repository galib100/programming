// Problem: B. Matrix of Differences
// Contest: Codeforces - Educational Codeforces Round 141 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1783/problem/B
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
		ll arr[n+10][n+10];
		int l =1;
		f(i,n){
			f(j,n){
				arr[i][j]=l;
				l++;
			}
		}
		 
		f(i,n){
			 
		 		swap(arr[1][i],arr[n-i-1][n-i-1]);	
		 		swap(arr[i][1],arr[1][n-i-1]);	
			 }
		
		f(i,n){
			f(j,n){
				cout<<arr[i][j]<<" ";
				}
			cout<<nl;
		} 
    }
    }
    




int main()
{
    fastio;



    solve();
    return 0;
}


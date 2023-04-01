// Problem: A. Make it Beautiful
// Contest: Codeforces - Educational Codeforces Round 141 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1783/problem/0
// Memory Limit: 512 MB
// Time Limit: 3000 ms

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
    		int temp = arr[0];
    		bool all=true;
    		bool jhamela = false;
    		ll sm=0;
    		f(i,n){
    		 if(temp!=arr[i]){
    		 	all = false;
    		 	break;
    		 }
    		 if(sm==arr[i]){
    			jhamela  = true;
    		 }
    		 sm+=arr[i];
    		 temp=arr[i];
    			}
    			
    	
    	if(all){
    		cout<<"NO"<<nl;
    	}else {
    		cout<<"YES"<<nl;
    		 sort(arr,arr+n);
    		 cout<<arr[n-1]<<" ";
    		 
    		 f(i,n-1){
    		 	cout<<arr[i]<<" ";
    		 }cout<<nl;
    		 
    		}
    			
    }

    }




int main()
{
    fastio;



    solve();
    return 0;
}


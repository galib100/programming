// Problem: C. Premutation
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Time:2023-01-27 21:48:07


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
		int arr[n+10][n+10];
		int allsum =0;
		 int restSum=0;
		f(i,n){
			f(j,n-1){
				cin>>arr[i][j];
				if(i==0)restSum+=arr[0][j];	
			}
			allsum+=i+1;
		}
		ll comok = allsum-restSum;
		int comokPos=0;
		// cout<<comok<<nl;
		 f(i,n){
		 	f(j,n){
		 		if(arr[i][j]==comok){
		 			comokPos= max(comokPos,j);
		 		}
		 	}
		 }
		 if(comokPos==n-2){
		 	comokPos++;
		 }
		  f(i,n){
		  	if(i==comokPos){
		  		cout<<comok<<" ";
		  	}
		  	if(i!=n-1)cout<<arr[0][i]<<" ";
		  }
		  cout<<nl;
		
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


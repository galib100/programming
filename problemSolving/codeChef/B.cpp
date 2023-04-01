// Problem: B. Number of Smaller
// Contest: Codeforces - ITMO Academy: pilot course - Two Pointers Method - Step 1
// URL: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time:2023-03-31 16:55:22


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
   ll n,m;
     cin>>n>>m;
     ll arr[n+10];
     ll arr1[m+10];
     f(i,n)cin>>arr[i];
     f(i,m)cin>>arr1[i];
     ll arr2[n+m+1];
    	int i1=0;
    	int i2=0;
         while(i2<m && i1<=n){
     		 if(arr1[i2]<=arr[i1] || i1==n){
     		 	arr2[i2]=i1;
     		 	i2++;
     		 }else{
     		 	 i1++;
     		 	}
     		 
     		 
         }
         f(i,m){
         	cout<<arr2[i]<<" ";
         }cout<<nl;

}


int main()
{
    fastio;



    solve();
    return 0;
}


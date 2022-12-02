// Problem: B. Also Try Minecraft
// Contest: Codeforces - Educational Codeforces Round 132 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1709/B
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
     ll m,n;
     cin>>m>>n;
     ll arr[m+10];
     f(i,m+1){

     if(i!=0)cin>>arr[i];

     }
     ll frWrd[m+1]={0};
     ll bckWrd[m+1]={0};
      for(int i =1;i<=m;i++){
     	if(arr[i]-arr[i+1]>0){
     		frWrd[i]=(arr[i]-arr[i+1]);
     	}else{
     		frWrd[i]=0;
     	}
     }
     //backword_subtraction_are_stored
      	for(int i =m-1;i>1;i--){
     	if(arr[i]-arr[i-1]>0){
     		bckWrd[i]=(arr[i]-arr[i-1]);
     	}else{
     		bckWrd[i]=0;
     	}
     }
       for(int i =1;i<=m;i++){
     	     	cout<<frWrd[i]<<" "<<nl;
     	     		cout<<bckWrd[i]<<" "<<nl;
     }

     // vector<pair<int,int>> v;
     // f(i,n){
     	// ll j,k;
     	// cin>>j>>k;
     	// v.push_back(make_pair(j,k));
//
     // }
   		// ll sum=0;
      // f(i,n){
//
     	 // cout<<sum<<nl;
//
     // }
//

}


int main()
{
    fastio;



    solve();
    return 0;
}


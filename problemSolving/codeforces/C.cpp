// Problem: C. Removing Smallest Multiples
// Contest: Codeforces - Codeforces Round #822 (Div. 2)
// URL: https://codeforces.com/contest/1734/problem/C
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
			ll n ;
			cin>>n;
			// ll arr[n+10];
			vector<int>v;
			 string ss;
			 cin>>ss;
			 f(i,n){
			 	if(ss[i]=='0'){
			 		v.push_back(i+1);
			 	}
			 }
			  f(i,v.size()){
			  	 for(int j=i+1;j<v.size();++j){
			  	 	if(v[j]%v[i]==0){
			  	 		v[j]=v[i];
			  	 	}
			  	 }
			  }
			  
			  ll sum=0;
			  f(i,v.size()){sum+=v[i]; cout<<v[i]<<" ";}
			  // cout<<sum<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


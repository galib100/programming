// Problem: V - Map: Search
// Contest: Virtual Judge - STL - Learning
// URL: https://vjudge.net/contest/479265#problem/V
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Time:2023-03-17 10:41:06


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;++i)
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
 
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
void solve()
{
    ll t;
    cin>>t;
    map<string,int>mp;
    
    while(t--)
    {
		int x;
		cin>>x;
		if(x==0){
			string ss;
			int a;
			cin>>ss;
			cin>>a;
			mp[ss]=a;
		}else{
			string ss;
			cin>>ss;
			cout<<mp[ss]<<nl;
		}
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


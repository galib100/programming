// Problem: X - Multi-Map
// Contest: Virtual Judge - STL - Learning
// URL: https://vjudge.net/contest/479265#problem/X
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// Time:2023-03-17 11:56:51


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
    multimap<string,int>mp;
    while(t--)
    {
		int q;
		cin>>q;
		if(q==0){
			string ss;
			int x;
			cin>>ss;
			cin>>x;
			
			//insert
			mp.insert(make_pair(ss,x));
		}else if(q==1){
			string ss;
			cin>>ss;
			//get
			for(auto it1 =mp.lower_bound(ss);it1!=mp.upper_bound(ss);it1++){
				cout<<it1->ss<<nl;
			}
		}else if(q==2){
			//delete
			string ss;
			cin>>ss;
			mp.erase(ss);
			
		}else{
			//dump
			string l,r;
			cin>>l;
			cin>>r;
			auto it1=mp.lower_bound(l);
			auto it2=mp.upper_bound(r);
			while(it1!=it2){
				cout<<it1->ff<<" "<<it1->ss<<nl;
				it1++;
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


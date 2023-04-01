// Problem: U - Multi-Set
// Contest: Virtual Judge - STL - Learning
// URL: https://vjudge.net/contest/479265#problem/U
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// Time:2023-03-17 09:44:49


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
    multiset<int>ms;
    
    while(t--)
    {
		int q;
		cin>>q;
		if(q==0){//insert
			int x;
			cin>>x;
			ms.insert(x);
			cout<<ms.size()<<nl;
			
		}else if(q==1){//find
			int x;
			cin>>x;
			cout<<ms.count(x)<<nl;
			
		}else if(q==2){//delete
			int x;
			cin>>x;
			ms.erase(x);
			
		}else{//dump
			int l,r;
			cin>>l>>r;
			auto it=ms.lower_bound(l);
			 while(*it<=r && it!=ms.end()){
			 	cout<<*it<<nl;
			 	it++;
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


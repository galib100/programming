// Problem: C - List
// Contest: Virtual Judge - STL - Learning
// URL: https://vjudge.net/contest/479265#problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Time:2023-03-17 08:09:18


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
    list<int>l;
    list<int>::iterator it;
    it =l.end();
    while(t--)
    {
		ll x;
		cin>>x;
		if(x==0){
			//insert
			int a;
			// cout<<"ins";
			cin>>a;
			l.insert(it,a);
			it--;
			
			
		}else if(x==1){
			//move
			int a;
			cin>>a;
			if(a>0){//pos
			it=next(it,(a));

			}else{//neg
				it =prev(it,a);
				 
			}
			
		}else{
			//delete
			cout<<*it<<"-d"<<nl;
			if(it!=l.end()){
				l.erase(it);
			}
		}
    }
    l.erase(it);
    for(auto v:l){
    	cout<<v<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


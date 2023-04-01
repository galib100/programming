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
    multimap<string,int>mp;
       mp.insert(make_pair("g",10));
   mp.insert(make_pair("g",1));
   mp.insert(make_pair("m",4));
   mp.insert(make_pair("h",6));
   auto it =mp.lower_bound("a");
   
   // cout<<it->ss<<nl;
   
    while(it->ff >="z" && it!=mp.end()){
   			cout<<it->ff<<" -"<<it->ss<<nl;
   	 	it++;
    }
	// for(auto it=mp.lower_bound("g");it!=mp.upper_bound("g");it++){
		// cout<<it->ss<<nl;
	// }
}


int main()
{
    fastio;



    solve();
    return 0;
}


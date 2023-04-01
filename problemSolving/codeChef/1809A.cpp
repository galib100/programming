// Problem: A. Garland
// Contest: Codeforces - Educational Codeforces Round 145 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1809/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Time:2023-03-24 10:13:15


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
    ll t;
    cin>>t;
    while(t--)
    {
	string ss;
	cin>>ss;
	int n=ss.size();
	int ans=-1;
	int mx=0;
	f(i,n){
		 int cnt =count(ss.begin(),ss.end(),ss[i]);
			mx=max(mx,cnt);
		 
	}
	if(mx==1 || mx==2){
		cout<<4<<nl;
	}else if(mx==3){
		cout<<6<<nl;
	}else{
		cout<<-1<<nl;
	}
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


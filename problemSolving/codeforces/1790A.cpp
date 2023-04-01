// Problem: A. Polycarp and the Day of Pi
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time:2023-01-27 20:39:34


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
    	string pi = "314159265358979323846264338327";
    	
    	string ss;
    	cin>>ss;
    	ll c=0;
    	f(i,ss.length()){
    		if(ss[i]==pi[i]){
    			c++;
    		}else{
    			break;
    		}
    	}
		cout<<c<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


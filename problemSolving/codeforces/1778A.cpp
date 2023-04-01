// Problem: A. Flip Flop Sum
// Contest: Codeforces - Codeforces Round #848 (Div. 2)
// URL: https://codeforces.com/contest/1778/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Time:2023-02-02 11:29:15


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
    		ll n;
    		cin>>n;
    		ll sum=0;
    		vector<int>v;
    	bool find =false;
    		f(i,n){
    			ll a;
    			cin>>a;
    			v.push_back(a);
    			sum+=a;
    		}
    		if(sum<-1){
    			cout<<sum+4<<nl;
    		}else if(sum==n){
    			cout<<sum-4<<nl;
    		}else{
    		
    			f(i,n-1){
    				if(v[i] ==-1 && v[i+1]==-1){
    					cout<<sum+4<<nl;
    					find =true;
    					break;
    				}
    			}
    			if(!find){
    				cout<<sum<<nl;
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


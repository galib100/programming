// Problem: N Triplets
// Contest: CodeChef - START72D
// URL: https://www.codechef.com/START72D/problems/NTRIPLETS
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
		ll temp =0;
	if(n%2==0){
			if(n/2 !=2)cout<<1<<" "<<2<<" "<<n/2<<nl;
			else{
				cout<<"-1"<<nl;
			}
	}else{
		for(int i =3;i*i<n;++i){
			if(n%i==0){
				temp =i;
				break;
			}
		}
		if(temp==0){
			cout<<"-1"<<nl;
		}else if(n/temp != temp){
			cout<<1<<" "<<temp<<" "<<n/temp<<nl;
		}else{
			cout<<"-1"<<nl;
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


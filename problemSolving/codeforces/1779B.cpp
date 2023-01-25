// Problem: B. MKnez's ConstructiveForces Task
// Contest: Codeforces - Hello 2023
// URL: https://codeforces.com/contest/1779/problem/B
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
		if(n%2==0){
			cout<<"YES"<<nl;
			for(int i=1;i<=n;++i){
				 if(i==1){
				 	cout<<1;
				 }else if(i%2==0){
				 	cout<<" "<<-1;
				 }else{
				 	cout<<" "<<1;
				 }
			}
			cout<<nl;
		}else{
			if(n==3){
				
				cout<<"NO"<<nl;
			}else{
				cout<<"YES"<<nl;
				ll p =n/2;
				for(int i=1;i<=n;++i){
					i%2==0?cout<<-p<<" ":cout<<p-1<<" ";
				}cout<<nl;
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


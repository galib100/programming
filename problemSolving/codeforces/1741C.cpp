//https://codeforces.com/problemset/problem/1741/C
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
        int n;
        cin>>n;
        ll arr[n+10];
        ll tSum =0;
        f(i,n){
            cin>>arr[i];
            tSum+= arr[i];
        }
         
        ll sum=0;
        ll ideal =0;
        
    	f(i,n){
    		sum+=arr[i];
    		ll tempSum=sum;
    		for(int j=i+1;j<n-1;++j){
    			
				if(tSum%tempSum==0){
					
					ideal =tempSum;
					 // cout<<ideal<<nl;
					break;
					//
				}else tempSum+=arr[j];
    		}
    	}
    	ll ansSum=0;
    	int ans =0;
    	int c=0;
    	f(i,n){
    		ansSum+=arr[i];
    		c++;
    		if(ansSum==ideal){
    			 ans=max(ans,c);
    			 c=0;ansSum=0;
    		}
    		
    	}
    	cout<<ideal<<nl;
    	if(ideal!=0)cout<<ans<<nl;
    	else cout<<n<<nl;  
	
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


// Problem: A. AvtoBus
// Contest: Codeforces - Codeforces Round #791 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1679/A
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
    	ll mnAns=0;
    	ll mxAns =0;
    	bool hasAns =false;
    	 
   	if(n%2!=0 || n<4){
   		hasAns=false;
   	}else{
   		if(n%6==0 && n%4==0){
    		// cout<<n/6<<" "<<n/4<<nl;
    		mnAns=n/6;
    		mxAns =n/4;
    		hasAns =true;
    } else {
    		ll h4=0;
    		ll h6=n;
    		while(h6>0){
    			h4=h4+4;
    			h6=h6-4;
    			if(h6%6==0){
    				hasAns =true;
    				break;
    				
    			} 
    		}
    		
    		// cout<< h6/6 + h4/4;<<" "<<n/4<<nl;
		ll hh4=n;
    		ll hh6=0;
    		while(hh4>0){
    			hh4=hh4-6;
    			hh6=hh6+6;
    			if(hh4%4==0){
    				hasAns = true;
    				break; 
    			} 
    		}
	    		if(n%6==0){
	    			mnAns =n/6;
	    		}else {
	    			
	    			
	    			mnAns = h6/6 + h4/4;
	    		}
	    		if(n%4==0){
	    			mxAns =n/4;
	    		}else {
	    			mxAns = hh4/4 + hh6/6; 
	    		}
		
    	}
    }
    	if(hasAns){
    		cout<<mnAns<<" "<<mxAns<<nl;
    	}else{
    		cout<<"-1"<<nl;
    	}
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


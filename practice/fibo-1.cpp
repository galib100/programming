#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr first
#define pb push_back
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"

void solve()
{
    
    
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n+10];
    
    f(i,n){
    	if(i==0){ arr[i]=0;arr[1]++;}
    	
    	if(i>1) arr[i]=(arr[i-2]+arr[i-1])%m;
    	
    	cout<<arr[i]<<" ";
    }
    cout<<nl;
    cout<<arr[n-1]<<nl;
    
}


int main()
{
    fastio;



    solve();
    return 0;
}


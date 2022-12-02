// Problem: E. Binary Inversions
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
int score(ll arr[10000000],ll n){
     ll tsum=0;
       ll curSum=0;
       for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            curSum++;
        }else{
            tsum+=curSum;
        }
       }
       return tsum;
}

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        int cnt =0;
        int fastZero=0;
        bool zeroFind=false;
        int lastOne=n-1;
        f(i,n)
        {
            cin>>arr[i];
            if(arr[i]==1)lastOne=i;
            else {
            if(cnt==0)fastZero=i;zeroFind=true;cnt++;
            }
        }

         ll sc0=score(arr,n);
           if(zeroFind) arr[fastZero]=1;

    	ll sc2= score(arr,n);
    		sc0 =max(sc0,sc2);
               if(zeroFind) arr[fastZero]=0;
                arr[lastOne]=0;
    ll sc1=score(arr,n);
       cout<<max(sc1,sc0)<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}



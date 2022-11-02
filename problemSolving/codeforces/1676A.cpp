
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
    while(t--){
        string ss;
        cin>>ss;

   if((int(ss[0])-'0' + int(ss[1])-'0'+ int(ss[2])-'0') == (int(ss[3])-'0' + int(ss[4])-'0'+ int(ss[5])-'0')){
    cout<<"YES"<<nl;
   }else{
    cout<<"NO"<<nl;
   }
    }

}


int main()
{
fastio;



    solve();
    return 0;
}


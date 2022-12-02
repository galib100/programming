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
    string ss;
    cin>>ss;
    int c =0;
    for(int  i = ss.size()-1;i>=0;i--){
        if(ss[i]=='a'){
            cout<<i+1<<nl;
            c=1;
            break;
        }
    }
  if(c!=1) cout<<"-1"<<nl;


}


int main()
{
    fastio;



    solve();
    return 0;
}




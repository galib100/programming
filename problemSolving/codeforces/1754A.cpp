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
    while(t--)
    {
        int n;
        cin>>n;
        char ar[n+10];
        int numQ=0;
        int numA=0;
        string ans="No";
        f(i,n){
            cin>>ar[i];
        }
        f(i,n){
            if(ar[i]=='Q'){
                numQ++;
                ans="No";
            }else{
                numA++;
                if(numA>=numQ){
                    ans="Yes";
                    numA=0;
                    numQ=0;
                }else{
                    ans = "No";
                }
            }
        }
        cout<<ans<<nl;

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}



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
        if(n%7==0){
            cout<<n<<nl;
        }else{
             int m=n/7;
             if((n-m*7) >((m+1)*7-n)){
                    cout<<(m+1)*7<<nl;
             }else{
                cout<<m*7<<nl;
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


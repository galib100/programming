
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
        int c=0;
        cout<<1;
        int nn=1;
        if(n%2==0){
        nn=n/2;
        }else{
            nn=n/2 +1;
        }
        for(int i=1;i<=nn;i++){

            if(i!=1)
            {
            cout<<" "<<n-c<<" "<<i;
            c++;
            }
        }
        if(n%2==0){
            cout<<" "<<n/2+1;
        }
        cout<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


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
bool tested(int a,int b,int c,int n)
{
    if(a*b+c ==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    ll n;
    cin>>n;
    int c=0;
    ll i=1,j=1,k=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            for( k=1; (i*j+k)<=n; k++)
            {
                if(tested(i,j,k,n))
                {
                    c++;
                }
            }
        }
    }
    cout<<c<<nl;

}


int main()
{
    fastio;



    solve();
    return 0;
}


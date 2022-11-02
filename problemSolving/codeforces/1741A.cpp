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
        string a,b;
        cin>>a;
        cin>>b;
        int na=a.size();
        int nb=b.size();
        if(a==b)
        {
            cout<<"="<<nl;
        }
        else if( (a[na-1]=='L') && ( (b[nb-1]=='S') || (b=="M") ))
        {
            cout<<">"<<nl;
        }
        else if(a[na-1]=='S' && b[nb-1]=='S')
        {
        if(na>nb)
            {
                cout<<"<"<<nl;
            }
            else
            {
                cout<<">"<<nl;
            }
        }
        else if(a[na-1]=='L' && b[nb-1]=='L')
        {
        if(na>nb)
            {
                cout<<">"<<nl;
            }
            else
            {
                cout<<"<"<<nl;
            }
        }else if(a[na-1]=='S' && b[nb-1]=='M'){
            cout<<"<"<<nl;
        }else if(a[na-1]=='M' && b[nb-1]=='S'){
            cout<<">"<<nl;
        }else{
            cout<<"<"<<nl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}



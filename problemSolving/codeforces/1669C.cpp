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
        ll n;
        cin>>n;
        int arr[n+10];
        for(int i=1; i<=n; ++i)
        {
            cin>>arr[i];
        }
        int o=0;
        int e=0;
        if(arr[1]%2!=0)
        {
            o=1;
        }
        if(arr[2]%2==0)
        {
            e=1;
        }
        string output=" ";
            for(int i=1; i<=n; ++i)
        {
            if(i%2!=0)
            {
                if((o==1) && (arr[i]%2==0))
                {
                    output="NO";
                    break;
                }
                else if((o==0) && (arr[i]%2!=0) )
                {
                    output="NO";
                    break;
                }
                else
                {
                    output="YES";
                }

            }
            else
            {
                if((e==1) && (arr[i]%2!=0))
                {
                    output="NO";
                    break;
                }
                else if((e==0) && (arr[i]%2==0) )
                {
                    output="NO";
                    break;
                }
                else
                {
                    output="YES";
                }

            }
        }

        cout<<output<<nl;

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}






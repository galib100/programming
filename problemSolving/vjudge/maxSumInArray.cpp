#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,x,high=0,sum=0,c=0;
    cin>>n;
    cin>>x;
    ll arr[100];
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(ll i=1; i<=n; i++)
    {
        for(ll j=i; j<=n; j++)
        {
            sum = arr[i]+arr[j];
            if(sum==x && i!=j)
            {
                cout<<i<<" "<<j<<endl;
                c++;
                break;
            }

            sum =0;

        }
        if(c>=1)
        {
            break;
        }

    }
    if(c==0)
    {
        cout<< -1<<endl;;
    }
    return 0;
}

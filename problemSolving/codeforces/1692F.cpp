#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll arr[n];
        for(int i =0; i<n; i++)
        {
           cin>>arr[i];

        }
        int c =0;
        for(int i =0; i<n; i++)
        {
            for(int j =i+1; j<n; j++)
            {
                for(int k =j+1; k<n; k++)
                {
                    if(i!=j && j!=k & k!=i)
                    {
                        if((arr[i]+arr[j]+arr[k])%10 ==3)
                        {
                            c =1;
                            break;
                        }
                    }

                }
            }
        }
        c==1? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

}


int main()
{

    solve();
    return 0;
}


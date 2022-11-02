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
        char arr[100];
        char arr2[100];

        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
        }
        for(int j=0; j<n; ++j)
        {
            cin>>arr2[j];
        }
        int c =0;
        for(int i=0; i<n; ++i)
        {
            if(arr[i]=='R')
            {
                if(arr2[i]=='R')
                {
                    c=0;
                }
                else
                {
                    c=1;
                    break;
                }
            }
            else
            {
                if(arr2[i]=='R')
                {
                    c=1;
                    break;
                }else{
                c=0;

                }
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}


int main()
{

    solve();
    return 0;
}




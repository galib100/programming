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
        int arr[10000];
        vector<int>vec;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            int a;
            cin>>arr[i];

        }
        int maN =0;
        int maI =0;
        for(int i=1; i<=n; i++)
        {
                if(maN<arr[i]){
                    maN = arr[i];
                    maI = i;
                }

        }
        cout<<maI<<endl;

    }

}


int main()
{

    solve();
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;

        int arr[10];
        for(int i =1; i<=3; ++i)
        {
            cin>>arr[i];
        }

        if(arr[x]!=0 && arr[arr[x]]!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }

}


int main()
{

    solve();
    return 0;
}



#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define ll long long int
void solve()
{
    ll n;
    ll arr[10005];
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
     for(ll j=0; ; j++){
     int cc = 0;
      for(ll i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1] && (arr[i]+arr[i+1])%2!=0)
        {
            swap(arr[i],arr[i+1]);
            cc++;
        }
    }
    if(cc==0){
    break;
    }

     }

    int c=1;
    for(ll i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            c=0;
            break;
        }
    }
    if (c==1){
    cout<<"YES"<<endl;

    }
     else {
     cout<<"NO"<<endl;
     }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


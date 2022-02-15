//https://codeforces.com/contest/1631/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void inputArry(ll n, ll arr[10000])
{

    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];

    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,arr1[10000],arr2[10000];
        cin>>n;
        inputArry(n,arr1);
        inputArry(n,arr2);

        for(ll i =0; i<n; i++)
        {
            if(arr1[i]>arr2[i])
            {
                swap(arr1[i],arr2[i]);
            }
        }
        ll maxx1=0,maxx2=0;
         for(ll i =0; i<n; i++)
        {
           maxx1 = max(maxx1,arr1[i]);
           maxx2 = max(maxx2,arr2[i]);
        }
        cout<<maxx1*maxx2<<endl;
    }
return 0;
}

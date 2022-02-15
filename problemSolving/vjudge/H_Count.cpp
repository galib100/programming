#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<iterator>
#include<list>
using namespace std;
#define ll long long int

void solve()
{
    int n,q,b,e,k;
    cin>>n;
    int ar[10000];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    cin>>q;
    for(int j=0; j<q; j++)
    {
        cin>>b>>e>>k;
        cout<<count(ar+b,ar+e,k)<<endl;
    }



}


int main()
{
    solve();
    return 0;
}



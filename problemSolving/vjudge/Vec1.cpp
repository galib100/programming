//https://vjudge.net/contest/479265#problem
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
#define ll long long int
#define pb push_back
#define ppB pop_back

void solve()
{
    ll q;

    vector<ll> vec;
    cin>>q;
    for(ll i=1; i<=q; i++)
    {
        ll x,p;
        cin>>x;
        if(x==0)
        {
            cin>>p;
            vec.pb(p);
        }
        else if (x==1)
        {
            cin>>p;
            cout<<vec[p]<<endl;
        }
        else
        {
            vec.ppB();
        }

    }




}


int main()
{

    solve();
    return 0;
}


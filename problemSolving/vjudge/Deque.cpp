//https://vjudge.net/contest/479265#problem
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
#define ll long long int
#define pb push_back
#define pf push_front
#define ppB pop_back
#define ppF pop_front

void solve()
{
    ll q;

    deque<ll> deq;
    cin>>q;
    for(ll i=1; i<=q; i++)
    {
        ll n,d, x,p;
        cin>>n;
        if(n==0)
        {
            cin>>d;
            if(d==0)
            {
                cin>>x;
                deq.pf(x);
            }
            else
            {
                cin>>x;
                deq.pb(x);
            }

        }
        else if(n==1)
        {
            cin>>p;
            cout<<deq.at(p)<<endl;

        }
        else
        {
            cin>>d;
            if(d==0)
            {
            deq.ppF();
            }
            else
            {
            deq.ppB();
            }
        }




    }




}


int main()
{

    solve();
    return 0;
}



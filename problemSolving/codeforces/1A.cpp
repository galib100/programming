//https://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,m,a;
    ll d,p;
    cin>>n>>m>>a;
    if(n%a==0 && m%a==0)
    {
     d = n/a;
     p = m/a;
        cout<< d+p<<endl;
    }
    else if (n%a!=0 && m%a!=0)
    {
        d = (n/a)+1;
        p = (m/a)+1;
        cout<<d+ p<<endl;
    }
    else if (n%a==0 && m%a!=0)
    {
        d = (n/a);
        p = (m/a)+1;
        cout<<d+ p<<endl;
    }else{
     d = (n/a)+1;
        p = (m/a);
        cout<<d+ p<<endl;
    }


}


int main()
{
    solve();

    return 0;
}


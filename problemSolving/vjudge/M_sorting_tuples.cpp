//https://vjudge.net/contest/479265#problem/I
#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<iterator>
#include<list>
using namespace std;
#define ll long long int

void solve()
{
    vector<tuple<ll,ll,char, ll, string> >p;


    int n,v,w,t,d,s;
    ///taking input n size vector
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%lld %lld %c %lld %s",&v,&w,&t,&d,&s);
    p.push_back(make_tuple(v,w,t,d,s));

    }
    sort(p.begin(),p.end());
    for(int i=0; i<n; i++)
    {
        cout<<get<0>(p[i])<<" "
            <<get<1>(p[i])<<" "
            <<get<2>(p[i])<<" "
            <<get<3>(p[i])<<" "
            <<get<4>(p[i])<<"\n";
    }
}

int main()
{
    solve();
    return 0;
}





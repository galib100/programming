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
    vector< pair<int,int>>p;
    vector< pair<int,int>>::iterator it;

    int n,x,y;
    ///taking input n size vector
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        p.push_back(make_pair(x,y)) ;
    }
    sort(p.begin(),p.end());
    for(int i=0; i<n; i++)
    {
        printf("%d %d\n",p[i].first,p[i].second);
    }
}

int main()
{
    solve();
    return 0;
}





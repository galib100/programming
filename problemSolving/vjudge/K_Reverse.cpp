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
    vector<int> vec1;
    vector<int>::iterator it;

    int n,a,q,b,e;
    ///taking input n size vector
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        vec1.push_back(a);
    }
    //query part start
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&b,&e);
        reverse(vec1.begin()+b,vec1.begin()+e);

    }
    for(it = vec1.begin(); it!=vec1.end(); it++)
    {
        it!=vec1.begin()? printf(" %d",*it) : printf("%d",*it);
    }
    printf("\n");

}


int main()
{
    solve();
    return 0;
}





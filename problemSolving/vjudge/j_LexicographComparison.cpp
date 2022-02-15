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
    vector<int> vec2;
    int n,m,a,b;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        vec1.push_back(a);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>b;
        vec2.push_back(b);
    }

    if(lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end())){
    cout<<1<<endl;
    }else {
    cout<<0<<endl;
    }
}


int main()
{
    solve();
    return 0;
}




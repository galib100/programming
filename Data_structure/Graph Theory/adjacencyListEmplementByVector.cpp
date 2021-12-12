#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;


int main()
{
    vector<int> vec[5];
    int edge,node,n1,n2;
  freopen("input.txt","r",stdin);

    cin>>node;
    cin>>edge;
    for(int i=0; i<edge; i++)
    {
   cin>>n1;
   cin>>n2;
   vec[n1].push_back(n2);
   vec[n2].push_back(n1);
    }

for(int i=0; i<vec[1].size(); i++)
    {
     cout<<vec[1][i]<<" ";
    }

}

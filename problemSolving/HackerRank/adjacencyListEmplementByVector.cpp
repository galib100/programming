#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print(vector<int> vec){
for(int i=0; i<3;i++){
   cout<<vec[i];
}
}
int main()
{
    vector<int> vec;
    int edge,node,n1,n2;
    freopen("input.txt","r",stdin);
    cin>>edge;
    cin>>node;
    for(int i=0; i<edge; i++)
    {
   cin>>n1;
   cin>>n2;
   vec[n1].push_back(n2);
   vec[n2].push_back(n1);
    }

print(vec);
}

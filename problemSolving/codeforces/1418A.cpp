#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
            ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

long long t,x,y,k,stick =1,c=0;
cin>>t;
    while(t--)
    {
cin>>x>>y>>k;

while(stick <(k+y*k)){
    stick+=(x-1);
    c++;
}
cout<<k+c<<endl;
c=0;
stick =1;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll x,y;
    cin>>x>>y;
    for(int i=1;i<=y;i++){
        if(i%x ==0){
            cout<<i<<endl;
        }else {
            cout<<i<<" ";
        }
    }
}


int main()
{

    solve();
    return 0;
}



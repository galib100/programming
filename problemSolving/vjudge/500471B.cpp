#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int x,t;
    cin>>x>>t;
    if((x+t)>=10){
        cout<<10-x<<" "<<10-t<<endl;
    }else{

        cout<<t<<" "<<x<<endl;
    }
}


int main()
{

    solve();
    return 0;
}






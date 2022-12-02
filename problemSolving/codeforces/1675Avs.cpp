#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if((a+b+c) >= (x+y)){
            if(abs(a-x)+abs(b-y)<=c){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }else{
            cout<<"NO"<<endl;
        }

    }

}


int main()
{

    solve();
    return 0;
}


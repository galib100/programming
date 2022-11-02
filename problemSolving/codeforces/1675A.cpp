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
            int d=0;
            if(a<x && b<y){
                d = (x-a)+(y-b);
            }else if(a<x && b>y){
                d=(x-a);
            }else{
                d = (y-b);
            }
        if(a+b+c >= x+y){
            if(d<=c){
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


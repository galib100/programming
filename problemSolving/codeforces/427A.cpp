#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    ll n,c=0;
    ll lastNum=0;
    cin>>n;
    while(n--){
        ll a;
        cin>>a;
            if(a==-1 && lastNum==0){
            c++;
            }else{
            lastNum+=a;
            }

    }
    cout<<c<<endl;

}


int main()
{

    solve();
    return 0;
}



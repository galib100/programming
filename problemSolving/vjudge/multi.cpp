#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
ll t;
    cin>>t;

while(t--){
        ll n;
        ll mul=1;
        cin>>n;
        while(n--){
        ll n1;
        cin>>n1;
            mul= mul*n1;
        }
        cout<<mul<<endl;

}

}


int main()
{

    solve();
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
            string ss;
            cin>>ss;
            if((ss[0] =='Y' || ss[0] =='y' ) && (ss[1] =='E' || ss[1] =='e') && (ss[2] == 'S' || ss[2] == 's' ) ){
                cout<<"YES"<<endl;
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


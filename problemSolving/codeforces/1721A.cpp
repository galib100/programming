//https://codeforces.com/problemset/problem/1721/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    ll t;
    cin>>t;
    while(t--){
        string ss1;
        string ss2;
        cin>>ss1;
        cin>>ss2;
        string ss3 = ss1+ss2;
        if(ss1[0]==ss1[1] && ss2[0]==ss2[1] && ss1==ss2){
            cout<<0<<endl;
        }else if(ss1[0]==ss1[1] && ss2[0]==ss2[1]){
                cout<<1<<endl;
        }else if((ss1[0]==ss2[1] && ss1[1]==ss2[0]) ){
            cout<<1<<endl;
        }else if((ss1[0]==ss1[1] && ss2[0]!=ss2[1]) || (ss2[0]==ss2[1] && ss1[0]!=ss1[1])){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }

    }

}


int main()
{

    solve();
    return 0;
}

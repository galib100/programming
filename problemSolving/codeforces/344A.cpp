#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    string temp ="";
    int c =0;
    for(int i =1;i<=n;++i){
        string ss;
        cin>>ss;
        if(i==1){
            temp =ss;
        }
    if(temp!=ss){
        c++;
    }
    temp =ss;
    }
    cout<<c+1<<endl;

}


int main()
{

    solve();
    return 0;
}


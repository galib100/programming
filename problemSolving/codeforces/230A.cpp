
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
        ll s,n;
        cin>>s>>n;
        int c =0;
        while(n--){
           ll x,y;
           cin>>x>>y;
           if(s<x){

            c=1;
           }else{
            s +=y;
            c=0;
           }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
}


int main()
{

    solve();
    return 0;
}


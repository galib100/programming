
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string ss;
    cin>> ss;
    ll oC =0, zC=0;
    for(ll i=0;i<ss.length();i++){
    if(ss[i]=='1'){
    oC++;
    }else{
    zC++;
    }
    }
    if(oC>zC && oC>1 ){
    cout<<zC<<endl;
    }else if (oC<zC &&  zC>1){
    cout<<oC<<endl;
    }else{
    cout<<0<<endl;
    }


}


int main(){
ll t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}

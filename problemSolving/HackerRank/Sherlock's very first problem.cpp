#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void sovle(){
ll a[1000];
    for(ll i=0;i<10;i++){
    cin>>a[i];
    }
    for(ll i=0;i<10;i++){
    if((a[0]!=0) && ((a[6]!=0)||(a[9]!=0)) && ( ((a[1]!=0) && (a[2]!=0) ) ||( (a[3]!=0) && ((a[4]!=0)||(a[7]!=0)) && ((a[5]!=0) || (a[8]!=0)) )  )){
    cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }
    }
//                                                        bc                        D            Eh                         FI

}


int main(){
ll t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}

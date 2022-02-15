#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
ll k ,l;
cin>>k>>l;
    for(int i=1; ; i++){
    if((k*i-l)%10==0 || ((k*i)%10 ==0) ){
    cout<<i<<endl;
    break;
    }
    }


}


int main(){

    solve();

return 0;
}



//https://www.hackerrank.com/contests/ruet1601/challenges/habla-and-kebla-of-mathland
#include<bits/stdc++.h>
using namespace std;
#define ll double

int findN(ll r){
double i =1;
    double sum=1;
    while(1){
    if(sum==r){
    return i;
    break;
    }
    sum = sum + i/5;
    i++;
    }

}
void solve(){

ll hC=0,kC=0;
for(int i=0;i<10;i++){
ll r,h,k;
cin>>r>>h>>k;

ll n = findN(r);
    if(abs(n-h) < abs(n-k)){
    hC++;
    }
    else if( abs(n-h) >abs(n-k))
    {
    kC++;
    }
    else if(abs(n-h) == abs(n-k) ){
        if( int(h)%2==0 && int(k)%2!=0){
        hC++;
        }else{
        kC++;
        }
    }
}
    if(hC>kC){
    cout<<"Huhaha"<<endl;
    }else if(kC>hC){
    cout<<"Opss"<<endl;
    }else{
    cout<<"aha"<<endl;

    }
}


int main(){
 solve();



return 0;
}


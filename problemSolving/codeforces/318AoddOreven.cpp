#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll n,k;
    vector<ll>vec;
    cin>>n>>k;
     vec.push_back(1);
     for(ll a=1; a<=n; a++){

        if(a%2!= 0)
        {
             vec.push_back(a);
        }
    }

    for(ll i=1; i<=n; i++){
        if(i%2== 0)
        {
             vec.push_back(i);
        }
    }
    cout<<vec[k]<<endl;
//
//for(int i=1;i<=n;i++){
//    cout<<vec[i]<<endl;
//}

    return 0;
}

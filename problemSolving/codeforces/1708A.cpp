#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;
        ll arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        int c =0;
         for(int i =2;i<n;i++){
           if(arr[i-1]>arr[i]){
            c=1;
            break;
           }
        }
        if(c==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
}


int main()
{

    solve();
    return 0;
}


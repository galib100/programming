#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n;

    cin>>n;
    string ar[n];
    for(ll i =0;i<n;i++){

        cin>>ar[i];
    }

    int c=0;
    for(ll i =0;i<n;i++){

        if(ar[1]< ar[i]){
        cout<<"YES"<<endl;
        c=1;
        break;
        }
    }

    if(c==0){
    cout<<"NO"<<endl;
    }
return 0;
}

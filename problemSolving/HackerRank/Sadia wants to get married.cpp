#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    while(1)
    {
        ll n,p=0;
        ll cnt =0;
        cin>>n;
       for(ll i=2;i<n;i++){
            if(n%i==0){
            p=1;
            cout<<"not prime"<<endl;
            break;
            }
       }
       if(p==0){
              cout<<"prime"<<endl;
       }
    }


}

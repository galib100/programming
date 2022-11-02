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
         if(n==1){
            cout<<2<<endl;
        }else if(n==2){
            cout<<1<<endl;
        }
         else if(n%3==0){
            cout<<n/3<<endl;
         }else if(n%3 ==2){
            cout<<n/3 +1<<endl;
         }else{
            int t = n/3 -1;
           cout<<t+(n-(3*t))/2<<endl;
         }



         }


}


int main()
{

    solve();
    return 0;
}



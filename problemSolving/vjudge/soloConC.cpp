#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll n,x;
   cin>>n>>x;
   int c =0;
   float sum =0;
   for(int i =1;i<=n;i++){
        ll v,p;
        cin>>v>>p;
       sum += ((float)v/100) *p;

        if(sum >=x){

             c=i;
        }
   }
    if(c>0){
        cout<<c<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}


int main()
{

    solve();
    return 0;
}



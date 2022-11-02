#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string solve()
{
    ll n,arr[100000];
       ll k;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<=n; i++)
        {
        ll temp = arr[i];
            arr[i] = 0;
            for(int j=i+1; j<=n; j++)
            {
              arr[j] = arr[j]-temp;
              if(arr[j]==k){
              return "YES";
              }
            }
        }

    }




int main()
{
ll t;
cin>>t;
while(t--)
    {
   if(solve()!="YES"){
   cout<<"NO"<<endl;
   }else{
   cout<<"YES"<<endl;
   } ;
    return 0;
}}


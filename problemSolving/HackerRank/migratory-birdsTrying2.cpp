#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll hashArr[6];

void solve()
{
    ll n;
    cin>>n;

    ll arr[n+10];

    for(int i =0;i<n;++i){
        cin>>arr[i];
        hashArr[arr[i]]++;
    }
    int maxele = *max_element(hashArr,hashArr+6);
//    cout<<"max num"<<maxele<<endl;
 for(int i =1;i<=5;++i){
   if(hashArr[i]==maxele ){
    cout<<i<<endl;
    break;
   }
 }


     }


int main()
{

        solve();


    return 0;
}




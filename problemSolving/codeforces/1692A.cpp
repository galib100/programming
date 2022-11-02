#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        ll arr [100];

         for(int i =0;i<4;i++){
                cin>>arr[i];
         }
         int c =0;
           for(int i =1;i<4;i++){
                if(arr[0]<arr[i]){
                    c++;
                }
         }
         cout<<c<<endl;
    }

}


int main()
{

    solve();
    return 0;
}


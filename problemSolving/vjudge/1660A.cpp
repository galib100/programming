#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long int
using namespace std;
void solve()
{
ll t;
cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        for(int i =1; ; i++){
         if((i== a) || (i==(b*2))|| (i==(a+b*2))){

         }else{
         cout<<i;
         break;
         }
         }
    }

}
int main()
{
    solve();

    return 0;
}



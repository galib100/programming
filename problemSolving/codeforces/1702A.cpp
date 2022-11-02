#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int digitSum(int n){
    int c =0;
      while(n>0){
        if(n%10>=0){
            n = n/10;
              c++;
        }
      }
      return c;
}
void solve()
{
     ll t;
     cin>>t;
     while(t--){
        ll m;
        cin>>m;
        ll ans  =m- pow(10,(digitSum(m)-1));
     cout<<ans <<endl;

     }
}


int main()
{

    solve();
    return 0;
}





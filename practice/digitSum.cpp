#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
     ll n;
     int c =0;
     cin>>n;
      while(n>0){
        if(n%10>=0){
            n = n/10;
              c++;
        }

      }
      cout<<c<<endl;
}


int main()
{

    solve();
    return 0;
}





#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         string ss;
         cin>>ss;
         for(int i=0;i<n;){
//            if( int(ss[i+2])!=0){
                int pos = (int) ss[i]+ (int) ss[i+1] ;

                cout<<(pos);
               i=i+2;
//            }
         }
      }


}


int main()
{

    solve();
    return 0;
}



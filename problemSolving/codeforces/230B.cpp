#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N =1e12;
void solve()
{

    ll n;

    cin>>n;
      ll arr[n+1];
    for(int i=0;i<n;i++){
//        cin>>arr[i];
        ll a;
        int c=0;
        cin>>a;
        for(int j =1;j<=a;++j){
            if(a%j==0){
                c++;
            }
        }
        c==3?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }


}


int main()
{

    solve();
    return 0;
}


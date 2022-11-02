

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve()
{
    ll n,arr[100000];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll visi = n;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if((i!=(n-1)) &&(arr[i]< arr[i+1])){
                visi = visi-1;
            }
        }
        cout<<visi<<endl;
}
int main()
{

    solve();
    return 0;
}

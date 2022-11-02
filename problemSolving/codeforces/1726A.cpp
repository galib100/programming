#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int arr[n+10];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        if(n!=1){
            cout<<*max_element(arr,arr+n)- *min_element(arr,arr+n)<<endl;
        }else{
            cout<<0<<endl;
        }

 }

    }



int main()
{

    solve();
    return 0;
}





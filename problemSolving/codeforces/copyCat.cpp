#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll hashAr[5];

void solve()
{
    ll n;
    int arr[5];
    cin>>n;
     for(int i =0;i<n;i++){
        cin>>arr[i];
        hashAr[arr[i]]++;
     }
     for(auto val: arr){
        cout<<val<<" ";
     }
     cout<<endl;
     for(auto val: hashAr){
        cout<<val<<" ";
     }
     cout<<endl;



}


int main()
{

    solve();
    return 0;
}


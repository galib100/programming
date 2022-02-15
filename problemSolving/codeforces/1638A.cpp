#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void solve()
{
    int n;
    int arr[501];
   cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
         if(arr[i]>arr[i+1]){
         swap(arr[i],arr[i+1]);
         break;
         }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

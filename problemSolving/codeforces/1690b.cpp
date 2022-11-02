#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,arr[100000],brr[100000];
        cin>>n;
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        for(int i =0;i<n;i++){
            cin>>brr[i];
        }
        ll dif = 0;
        ll temp =0;
        int c=0;
        string output = "YES";
        if(n==1){
            if(arr[0]-brr[0]<=0){
            output = "NO";
            }
        }
        for(int i =0;i<n;i++){
             if(brr[i] !=0){
             if((c!=0 )&& temp!=(arr[i]-brr[i]) ){
                output = "NO";
             }
                dif = arr[i]-brr[i];
                temp = dif;
                c++;
             }
        }
        cout<<output<<endl;
    }

}


int main()
{

    solve();
    return 0;
}



#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,arr[50];
    cin>>n;
    ll temp =1;
    for(int i=1;i<=n;i++){
            if(i>=3){
                temp = arr[i-2]+arr[i-1];
            }
            arr[i]=temp;
    }

        cout<<arr[n]<<endl;

return 0;
}




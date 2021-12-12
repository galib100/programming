#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[200];
    int k;
    cin>>n;
cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int c=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if((arr[i]+arr[j])%k==0 && i<j){
               c++;
            }
        }
    }
cout<< c<<endl;
return 0;
}

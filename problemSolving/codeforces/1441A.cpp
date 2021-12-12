#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--){
    int n;
    int j=0;
    int arr[200];
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>arr[i];

    }
      for(int i=0;i<2*n;i=i+2){

        if((arr[i]+arr[i+1])%2==0){
            j=1;
    break;
        }
    }
        if(j==1){
            cout<<"No"<<endl;
        }
        else{
             cout<<"Yes"<<endl;
        }
    }
return 0;
}

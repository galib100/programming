#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--){
   int n;
   cin>>n;
   char arr[n-2][10];
   for(int i=0;i<(n-2);i++){
    cin>>arr[i];
   }
   for(int i=0;i<(n-2);i++){
        if(i==0){
            cout<<arr[]
        }
        if(arr[i][1]==arr[i+1][0]){
           cout<<arr[i][0];
        }
        else{
            cout<<arr[i][0]<<arr[i][1]<<arr[i+1][0];
        }

   }

}
return 0;
}

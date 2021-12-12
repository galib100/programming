#include<bits/stdc++.h>
using namespace std;
int larg(int arr[100],int x){
    int lar = arr[0];
for(int i=0;i<x;i++){
         if(lar<arr[i]){
           lar=arr[i];
         }
    }
    return lar;
}

int small(int arr[100],int x){
    int smal = arr[0];
for(int i=0;i<x;i++){
         if(smal>arr[i]){
           smal=arr[i];
         }
    }
    return smal;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[100],arr2[100];
    ///array_input
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
for(int i=0;i<m;i++){
         cin>>arr2[i];
    }
int lNum1= larg(arr1,n);
int sNum2 = small(arr2,m);
//cout<<lNum1<< "  "<<sNum2<<endl;
int ans=0;
for(int j = lNum1;j<=sNum2;j++){ //4
        int c = 0,c1=0;
    for(int i=0;i<n;i++){
       if(j%arr1[i]==0){
        c++;
       }
       else{
            c=0;
            break;
       }
    }
    ///forArr2_check
    for(int i=0;i<m;i++){
       if((c!=0) && (arr2[i]%j==0)){
        c1++;

       }
    else{
    c1=0;
    break;
    }
    }
    if(c!=0 && c1!=0){
        ans++;
    }
    }
    cout<<ans<<endl;
return 0;
}

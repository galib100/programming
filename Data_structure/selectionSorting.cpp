#include<bits/stdc++.h>
using namespace std;
///this is the selection sort source code  done by me


int main(){
int arr[100];
///={10,5,2,8,7};
int n;
cin>>n;

for(int i=0; i<n;i++){
    cin>>arr[i];
}




 int loca=0;
for(int j=0;j<n;j++){
int temp = arr[j];

for(int i=j;i<n;i++){
   if(temp >=arr[i]){
    temp = arr[i];
    loca=i;
   }
}
//cout<<temp<<" "<<loca<<endl;
arr[loca] = arr[j];
arr[j]=temp;

}

///print
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
}

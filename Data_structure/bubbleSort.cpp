#include<bits/stdc++.h>
using namespace std;

printf(int arr[100]){
for(int i=0;i<6;i++){
    cout<<arr[i]<<"  ";
}
}

int main(){
int arr[100] = {4,24,6,9,2,10};
int n=6;
printf(arr);
cout<<endl;

for(int j=1;j<n;j++){
for(int i=0;i<n-j;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
}
}
printf(arr);
}

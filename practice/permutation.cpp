#include<bits/stdc++.h>
using namespace std;

 void displayArray(int n,int arr[100]){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int n;

int arr[] = { 10, 2, 3 };

    sort(arr, arr + 3);
displayArray(3,arr);
next_permutation(arr, arr + n);

//for(int i=1;i<=3;i++){
//    cin>>arr[i];
//}
//

}

#include<bits/stdc++.h>
using namespace std;

int digitSum(int arr[100],int n){
        if(n==-1){
            return 0;
        }
       return arr[n]+digitSum(arr,n-1);


    }

int main(){
int arr[100];
    int n;
    cin>>n;

    for(int i =0;i<n;++i){
        cin>>arr[i];
    }

    cout<<digitSum( arr,n-1);
    cout<<endl;
	cout<<"galib"<<endl;
}

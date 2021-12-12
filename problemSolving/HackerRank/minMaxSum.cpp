#include<bits/stdc++.h>
using namespace std;
void srt(int arr[10]){


}

int main()
{
    int arr[5];
    for(int i=0; i<5;++i){
        cin>>arr[i];
    }

int n= sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+n);
int minSum=0,maxSum=0;
for(int i=1;i<5; i++){
minSum+=arr[i];
}
for(int i=0;i<4; i++){
maxSum +=arr[i];
}

cout<<maxSum<<" "<<minSum<<endl;
    return 0;
}



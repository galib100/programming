#include<bits/stdc++.h>
using namespace std;
int lSearch(int arr[],int n, int x){
for(int i=0;i<n;i++){
    if( x==arr[i]){
        return i;
    }

}
return -1;
}
int main(){
int arr[]={1,2,5,6,7,94,68,20};

int n= sizeof(arr)/sizeof(arr[0]);
//cout<<n<<endl;
int result  = lSearch(arr, n,200 );
(result==-1)? cout<<"not found"<<endl :cout<<"in : "<<result<<" found "<<endl;

//cout<<result<<endl;
}

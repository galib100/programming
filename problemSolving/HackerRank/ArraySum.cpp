#include<bits/stdc++.h>
using namespace std;

int main(){
long long  arr[999];
long long sum =0,n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}

   for(int j=0; j<n; j++){
    sum += arr[j];
}
cout<<sum<<endl;


}

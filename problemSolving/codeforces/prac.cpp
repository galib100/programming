#include<bits/stdc++.h>
using namespace std;
int main(){

int n,a[200]={4,5,2,2,4,1};
for(int i=0;i<n;i++){
    int t=0;
  for(int j=1;i<n-i;j++){
    if(a[t]>a[j]){
        swap(a[t],a[j]);
        t++;
    }
  }
}
for(int i=0;i<n;i++){
   cout<<a[i] <<"";
}
}


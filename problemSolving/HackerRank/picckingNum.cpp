#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int lon=0;
for(int i=0;i<n;i++){
    int c=0;
    for(int j=i;j<n;j++){
        if(abs(a[i]-a[j])<=1){
            c++;
        }
    }
    if(lon<c){
        lon=c;
    }
}
cout<<lon<<endl;
}

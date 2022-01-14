#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[1000];
for(int i=1;i<=n;i++){
    cin>>a[i];

}
int mB=a[1],mS=a[1],amC=0;
for(int i=2;i<=n;i++){
   if(a[i]>mB || a[i]<mS){
    amC++;
    if(a[i]>mB){
       mB =a[i];
    }else if(a[i]<mS){
    mS=a[i];
    }
   }
}
cout<<amC++<<endl;
return 0;
}

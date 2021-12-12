#include<bits/stdc++.h>
using namespace std;
int main(){
int a[100],b[100];
int aT=0,bT=0;

for(int i=0; i<3; i++){
    cin>>a[i];
}
for(int i=0; i<3; i++){
    cin>>b[i];
}
for(int i=0; i<3; i++){
    if(a[i]>b[i]){
        aT++;
    }
    else if(a[i]<b[i]){
        bT++;
    }
}
cout<<aT<<" "<<bT<<endl;
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[100];
float pC=0,nC=0,zC=0;
cin>>n;
for(int i=0;i<n; i++){
    cin>>a[i];
}
for(int i=0;i<n; i++){
    if(a[i]>0){
        pC++;
    }
    else if(a[i]<0){
        nC++;
    }
    else{
        zC++;
    }
}
printf("%.6f\n",pC/n);
printf("%.6f\n",nC/n);
printf("%.6f\n",zC/n);

return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
int n, a[100][100];
cin>>n;
for(int i=0; i<n; i++){
   for(int j=0; j<n; j++){
    cin>>a[i][j];
   }
}
int sL =0, sR=0;
for(int i=0; i<n; i++){
   for(int j=0; j<n; j++){
   if(i==j){
    sL+=a[i][j];
   }
   }
}

for(int i=0;i<n; i++){
    sR += a[i][n-i-1];
}

if((sR-sL)<0){
    cout<<(sR-sL)*(-1)<<endl;
}
else {
    cout<<(sR-sL)<<endl;
}


return 0;
}

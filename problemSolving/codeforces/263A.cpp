#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int ii=0,jj=0;
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){

        cin>>a[i][j];
        if(a[i][j]==1){
            ii=i;jj=j;
        }
    }
}
cout<<abs(3-ii) + abs(3-jj)<<endl;
return 0;
}

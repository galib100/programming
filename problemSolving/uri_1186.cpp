#include<bits/stdc++.h>
using namespace std;
int main(){
int l;
double m[12][12];
char op;

cin>>op;
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        cin>>m[i][j];
    }
}

   long double sum=0,mul,c=0;
    for(int j=1;j<=11;j++){
        for(int i=11;i>=12-j;i--){
        sum += m[j][i];
        c++;
    }
    }
if(op=='S'){
    printf("%.1Lf\n",sum);
}else{
    mul = sum/c;
     printf("%.1Lf\n",mul);
}


return 0;
}




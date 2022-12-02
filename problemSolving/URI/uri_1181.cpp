#include<bits/stdc++.h>
using namespace std;
int main(){
int l;
double m[12][12];
char op;
cin>>l;
cin>>op;
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        cin>>m[i][j];
    }
}

   long double sum=0,mul=1;
    for(int j=0;j<12;j++){

        sum += m[l][j];
    }

if(op=='S'){
    printf("%.1Lf\n",sum);
}else{
    mul = sum/12;
     printf("%.1Lf\n",mul);
}


return 0;
}


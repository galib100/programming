#include<bits/stdc++.h>
using namespace std;
int main(){
while(1){
int x,sum=0,i,j=5;
cin>>x;
if(x==0){break;}


if(x%2==0){
    i=x;
}else{
i=x+1;
}

while(j--){
sum = sum+i;
i=i+2;
}
cout<<sum<<endl;
//sum=0;
}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
int a,n,sum=0;
cin>>a>>n;

    while(n<=0){
    cin>>n;
}

for(int i=a;n!=0;i++){
    sum=sum+i;
    n--;
}
cout<<sum<<endl;
return 0;
}

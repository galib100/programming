#include<bits/stdc++.h>
using namespace std;
int main(){
int x,z,sum=0,c=0;
cin>>x;
cout<<endl;
cin>>z;
    while(x>=z){
    cin>>z;
}
for(int i=x;sum<=z;i++){
    sum =sum+i;
    c++;
}
cout<<c<<endl;

return 0;
}

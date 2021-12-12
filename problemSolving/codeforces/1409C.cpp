#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long t,n,x,y,dif,sum=0;

cin>>t;
while(t--){
   cin>>n>>x>>y;
   dif = y-x;
   if(n==2){
    cout<<x<<" "<<y<<endl;
   }
   else{
    sum =x;
   for(int i=0; i<n; i++){

   cout<<sum<<" ";
   sum += dif;
   }
   cout<<endl;
}

}
return 0;
}


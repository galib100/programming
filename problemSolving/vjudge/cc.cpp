#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0,temp =0;
cin>>n;
while(n--){
   int a,b,c;
   char tem;
   cin>>a>>b>>c;
   if(a>=b&& a>=c&& tem!='a'){
    temp =a;
    tem='a';
   }else if(b>=a&&b>=c && tem!='b'){
   temp=b;
   tem='b';
   }else {
       if(tem!='c'){
         temp = c;
         tem='c';
       }

   }
    sum+=temp;
}
cout<<sum<<endl;
return 0;
}

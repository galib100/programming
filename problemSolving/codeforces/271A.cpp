#include<iostream>
using namespace std;
#define ll long long
int main(){
 ll t;
 ll yr;
 ll temp;
 string ans = "YES";
 cin>>t;
 while(t--){
   cin>>yr;
   for(int i =0;yr>0;i++){
    temp  = yr%10;
yr = yr/10;
if((yr%10)!=temp){
    temp  = yr%10;
   }
   else{
    ans ="NO";
    break;
   }

}
cout<<ans;
 }

}

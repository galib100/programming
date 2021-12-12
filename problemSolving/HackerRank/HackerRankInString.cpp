#include<bits/stdc++.h>
using namespace std;
int main(){
 string ss;
 int v=0;
 string s="hackerrank";
 int n;
 cin>>n;
 while(n--){

 cin>>ss;
 int j=0,c=0;
 for(int i=0;i<ss.length();i++){
        if(s[j]==ss[i]){
                c++;
            j++;
        }
 }
 if(c>=10){
    cout<<"YES"<<endl;
 }else
 cout<<"NO"<<endl;

 }
return 0;
}

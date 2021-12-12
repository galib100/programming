#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c=0;
string ss;
cin>>n;
cin>>ss;

for(int i=0;i<n;){
    if(ss[i]=='0'&& ss[i+1]=='1'&& ss[i+2]=='0'){
    i=i+3;
    c++;
    }
    else{
        i+=1;
    }
}
cout<<c<<endl;
return 0;
}

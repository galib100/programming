#include<bits/stdc++.h>
using namespace std;
int main(){
string ss;
string ss2;
cin>>ss>>ss2;
for(int i=0;i<ss.length();i++){
    if(ss[i]==ss2[i]){
        cout<<0;
    }
    else{
        cout<<1;
    }
}
cout<<endl;
return 0;
}


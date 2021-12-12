#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b;
cin>>a>>b;
int len = a.length();
int c=0;
for(int i=0;i<len;i++){
    for(int j=0;j<len;j++){
        if(a[i]==b[j]){
            c++;
        }
    }
}
if(c==len){
    cout<<"Yes"<<endl;
}
else {
    cout<<"No"<<endl;
}
return 0;
}



#include<bits/stdc++.h>

using namespace std;
int main(){
string ss;
int c=0;
cin>>ss;
for(int i=0;i<ss.length();i++){
    if(isupper(ss[i])){
        c=c+1;
    }
}

cout<<c+1;
}

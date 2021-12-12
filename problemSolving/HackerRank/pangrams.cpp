#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int c=0;
getline(cin,s);
for(char i ='a';i<='z';i++){
for(int j=0;j<s.length();j++){
    if(s[j]==i || tolower(s[j])==i){
            c++;
        break;
    }
}
}
if(c==26){
    cout<<"pangram"<<endl;
}
else{
    cout<<"not pangram"<<endl;
}


}

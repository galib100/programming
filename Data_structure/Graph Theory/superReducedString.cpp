#include<bits/stdc++.h>
using namespace std;

string del (string s){
for(int i=0; i<s.length(); i++){
//        char temp = s[i];
    if(s[i]==s[i+1]){
      s.erase(i,i+1);

    }

}
del(s);

return s;

}

int main(){

string s;
cin>> s;//

string res = del(s);
cout<<res<<endl;

//for(int i=0;i<s.length();i++){
//
//        cout<<s[i];
//
//
//}
}

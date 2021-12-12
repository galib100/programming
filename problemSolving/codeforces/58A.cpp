#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
//   vector<char>vec;
    string  s ="hello";
    cin>>str;
    int j=0;
    string s2=" ";
    for(int i =0; str[i]!='\0'; i++){
        if(str[i] ==  s[j]){
            s2[j]=str[i];
             j++;

        }
    }

   if(s2[0]=='h'&&s2[1]=='e'&&s2[2]=='l' && s2[3]=='l'&& s2[4]=='o'){
    cout<<"YES"<<endl;
   }
   else {cout<<"NO"<<endl;}
    return 0;
}

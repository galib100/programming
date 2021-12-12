 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     char s[99];
     int c1=0,c0=0;
    cin>>s;
    
    for(int i=0; i<strlen(s); i++){
        if(s[i]=='0'){
           c0++;
          if(c1>=7){

          }else
           c1=0;
        }
        else{
            c1++;
            if(c0>=7){

          }
          else
            c0=0;
        }
        
    }
    if(c0 >= 7 || c1  >= 7){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;

 }
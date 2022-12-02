#include<iostream>
#include <cctype>
#include<bits/stdc++.h>
using namespace std;
int main(){
     char str[100];
     int i ;
     gets(str);
     for(i= 0; str[i]!='\0'; i++){
         if(str[i]=='a'|| str[i]=='A'||str[i]=='O'|| str[i]=='o'||str[i]=='E'||str[i]=='e'|| str[i]=='Y'||str[i]=='y'|| str[i]=='U'||str[i]=='u'|| str[i]=='I'|| str[i]=='i'){
             str[i] = ' ';
             
         }
        else{
       
             cout<<".";
              putchar(tolower(str[i]));
             }
     }
    
    
    return 0;
}
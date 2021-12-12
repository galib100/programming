#include<stdio.h>
#include<bits/stdc++.h>
int main(){
char str1[50];
int i,c=0;
gets(str1);
for(i=0; i<strlen(str1); i++){
    if(str1[i]=='a'|| str1[i]=='A' || str1[i]=='E' || str1[i]=='e'|| str1[i]=='I'||str1[i]=='i'||str1[i]=='o'||str1[i]=='O'||str1[i]=='u'||str1[i]=='U'){
        c++;
    }
}
printf("vowels: %d",c);


}

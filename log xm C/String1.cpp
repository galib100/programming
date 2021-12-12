#include<bits/stdc++.h>
#include<stdio.h>
int main(){
char str1[]="Musanna";
char str2[]="Galib";
int len ;
len = strlen(str1);
printf("len of str1: %d\n",len);
//printf(" concatanation of str1,str2 is : %s \n",strcat(str1,str2));
printf("%s \n",strcpy(str2,str1));
printf(" str2::%s\n",str2);
printf(" str1: %s\n",str1);
}

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    char name[30] = "Galib";
    char A1[10]= "RUET";
    char A2[20]="ECE";
    char A3[30],A4[30];
    printf("%s\n",strcpy(A3,A1));
    printf("%s\n %s\n",strcat(strcpy(A4,A1),"or"),A2);
    cout<<"A4 ::"<<A4<<endl;
    printf("%d\n %d",strlen(A2)+ strlen(A3),strlen(A4));



}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct myStruct {
char name[50];
int age;
double height;

};
int main(){
    struct myStruct s1;
    struct myStruct s2;
    s1.age = 20;
   /// s1.name = "galib";///isn't allow in case of using char. then use strcopy func;
   strcpy(s1.name,"Galib");
    cout<<s1.name<<endl;
    cout<<s1.age;
}

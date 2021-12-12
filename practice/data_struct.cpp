#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
struct myStruct{
   string name;
  int age;
  double res; 
};
int main(){
struct myStruct s1;
s1.age = 10;
s1.name= "galib";
// strcpy(s1.name, "galib");
cout<<s1.name<<endl;
cout<<s1.age<<endl;

}
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
char str [100]="when you come in ECE you can see the event Tenchnocracy ";
int ct =0,temp =0,large = 0;
int i=0,j=0;
for(j=0; j<=strlen(str);){
//    cout<<str[j];

for(i=j; str[i]!=' '; i++){
//    cout<<str[i];
    ct++;

}
if(ct>temp){
    temp=ct;
}
else {
    temp = temp;
}
ct=0;
j=i+1;
}
cout<< "ans:  "<<temp<<endl;

//cout<<strlen(str);
}

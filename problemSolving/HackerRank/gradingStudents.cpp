#include<bits/stdc++.h>
using namespace std;


int main (){
int n ;
cin>> n;
int grade[100];
for(int i=0; i<n; i++){
    cin>>grade[i];
}
for(int i=0; i<n; i++){
   int x = grade[i]/5;
   if((x+1)*5 - grade[i] <3 && grade[i]>=38){
    grade[i]= (x+1)*5;
   }
}
for(int i=0; i<n; i++){
    cout<<grade[i]<<endl;
}

}

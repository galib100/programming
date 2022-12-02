#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i;
  double a,c=0,av,to=0;
      for(i=0;i<6;i++){
           cin>>a;
           if(a>0){
               c++;
               to+=a;
           }
      }
        av = to/c ;
       printf("%0.0lf valores positivos\n",c);
       printf("%.1lf\n",av );
       
 return 0;
   }

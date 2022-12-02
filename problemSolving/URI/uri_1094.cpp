#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i,a,n,c=0,r=0,s=0;
  double total,pc,pr,ps;
  char name;
  cin>>n;
  for(i=0; i<n;i++){
      cin>>a>>name;
      if(name =='C'){
          c+=a;
      }
      else if(name == 'R'){
          r+=a;
      }
      else if(name == 'S'){
          s+=a;
      }

    total +=a;
  }
  pc = (double) (c*100)/total;
  pr = (double) (r*100)/total;
  ps = (double) (s*100)/total;
  cout<<"Total: "<<total<<" cobaias"<<endl;
  cout<<"Total de coelhos: "<<c<<endl;
  cout<<"Total de ratos: "<<r<<endl;
  cout<<"Total de sapos: "<<s<<endl;
printf("Percentual de coelhos: %.2lf",pc);
cout<<" %"<<endl;
printf("Percentual de ratos: %.2lf",pr);
cout<<" %"<<endl;
printf("Percentual de sapos: %.2lf",ps);
cout<<" %"<<endl;


    return 0;
   }

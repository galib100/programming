
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int a,b,c ,tem =0;
   cin>>a>>b>>c;
   if(tem<(a+b*c)){
    tem = (a+b*c);
   }
   if(tem<(a*(b+c))){
    tem = (a*(b+c));
   }
   if(tem<(a*b*c)){
    tem = (a*b*c);
   }
   if(tem<((a+b)*c)){
    tem = ((a+b)*c);
   }
   if(tem<(a+b+c)){
    tem=(a+b+c);
   }
   cout<<tem<<endl;

    return 0;
}


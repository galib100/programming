#include<bits/stdc++.h>
using namespace std;
int main(){
float i=1,j=1;
float s=1;
while(i!=39){
    i=i+2;
    j=j*2;
    s=s+i/j;
}
cout<<s<<endl;
printf("%.2f\n",s);
return 0;
}

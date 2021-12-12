#include<bits/stdc++.h>
using namespace std;
bool checkYear(int year){
      if (year % 400 == 0)
        return true;
   if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
int main(){
int n;
cin>>n;
if(checkYear(n)){
    cout<<"Yes"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}

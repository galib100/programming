#include<bits/stdc++.h>
using namespace std;
int main(){
int vs;
 int n;
string ans ="";
 cin>>n;

 for(int i=0; n>0; i++){
    vs = n%10;
    cout<<"vag ses:"<<vs<<endl;
if(vs==7 || vs ==4){
    ans = "YES";
     n = n/10;
     cout<<"n is now: "<< n<<endl;
}
else{ans ="NO";
break;
}

}
cout<<ans<<endl;

}

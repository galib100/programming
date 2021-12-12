#include<bits/stdc++.h>
using namespace std;


int main (){
    int x1,v1,x2, v2;
    cin>>x1>>v1>>x2>>v2;
    int loca1=x1;
    int loca2=x2;
    int jump1=0;
    int jump2=0;
    string output ="";

    while(1){

        loca1 = loca1+v1;
        jump1++;
        loca2 = loca2+v2;
        jump2++;

        if((loca1==loca2) && (jump1==jump2)){
//        cout<<"YES"<<endl;
output = "YES";
        break;
    }
    else{
        output ="NO";
    }
    if((x1>x2 && v1>v2) || ( x1<x2 && v1<v2)){
        output = "NO";
        break;
    }

    }
    cout<<output<<endl;

return 0;
}


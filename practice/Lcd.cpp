#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter two number to calculate LCD: "<<endl;
    cin>>n1>>n2;

    if(n2>n1){
//    swap(n2>n1);
        int temp = n2;
        n2 = n1;
        n1 = temp;

    }

    for(int i=n1;; i++){
        if( (i%n1==0) && ( i%n2 == 0)){
            cout<<"LCD :"<<i<<endl;
            break;
        }
    }


return 0;
}

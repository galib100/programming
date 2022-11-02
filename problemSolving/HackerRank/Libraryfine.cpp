#include<bits/stdc++.h>
using namespace std;

int main()
{

    int d1,m1,y1;
    int d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(y1!=y2){
    cout<< 10000<<endl;
    }
    else if (m1!=m2){
        if(m1<m2){
        cout<<(m2-m1)*500 <<endl;
        }
        else {
        cout<< ((12-m1)+m2)*500 <<endl;
        }
    }
    else if (d1!=d2){

     if(d1<d2){
        cout<<(d2-d1)*15 <<endl;
        }
        else {
        cout<< ((30-d1)+d2)*15 <<endl;
        }
   /// cout<< abs(d1-d2) * 15<<endl;
    }
    else {
    cout<<0<<endl;
    }


    return 0;
}

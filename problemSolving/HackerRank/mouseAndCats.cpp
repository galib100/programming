#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){


    int x,y,z;
    cin>>x>>y>>z;
    int dif1 = (z-x)<0?((z-x)*(-1)):(z-x);
    int dif2 = (z-y)<0?((z-y)*(-1)):(z-y);

    if(dif1>dif2){

        cout<<"Cat B"<<endl;

    }else if(dif1<dif2){
      cout<<"Cat A"<<endl;
    }
    else{
        cout<<"Mouse C"<<endl;
    }

}
return 0;
}

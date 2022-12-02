#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[100];
    for(int i=0;i<100;i++){
       cin>>a[i];
    }
     for(int i=0;i<100;i++){
            if(a[i]<=10){
//        cout<<"A["<<i<<"] = "<<a[i]<<endl;
    printf("A[%d] = %.1f\n",i,a[i]);
            }
    }

    return 0;
}




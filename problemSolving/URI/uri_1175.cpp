#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a[20];
    for(int i=0;i<20;i++){
       cin>>a[i];
    }
     for(int i=0;i<20;i++){

//        cout<<"A["<<i<<"] = "<<a[i]<<endl;
    printf("A[%d] = %d\n",i,a[19-i]);

    }

    return 0;
}





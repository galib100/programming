#include<bits/stdc++.h>
using namespace std;

int main(){
    int c=0;
    float n,sum=0;
    while(1){
        cin>>n;
        if(n<0){
            break;
        }else
        {
          sum+=n;
           c++;
        }

    }
     printf("%.2f\n",sum/c);
return 0;
}


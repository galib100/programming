#include<stdio.h>
#include<bits/stdc++.h>


void galib(int a[20]){



    int *ptr = a;
    int i;
    for(i=0; i<4; i++){
        printf("value: %d\n",*ptr);
        printf("address: %d\n", ptr);
        ptr++;
    }
}

int main(){
    int v[20]={100,200,300,400};
       galib(v);

}

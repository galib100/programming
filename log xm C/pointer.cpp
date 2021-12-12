#include<stdio.h>
#include<bits/stdc++.h>

int main(){
int p = 20;
int *ptr = &p;
printf("%d ",&p);
printf("add by pointer :%d\n",ptr);
*ptr = 30;
printf("value : %d\n %d",*ptr,p);

}

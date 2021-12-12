#include<stdio.h>
int factorial(int a){

    if(a<=1){
return 1;
    }
     return a* factorial(a-1);





//for(i=a; i>0;i--){
//    ans =ans*i;
//
//}
//printf("ans: %d \n",ans);

}
int main(){

printf(" ans:%d",factorial(4));

return 0;
}

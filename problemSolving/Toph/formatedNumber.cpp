#include<bits/stdc++.h>
using namespace std;
int main(){
int h,m;
float angl;

cin>>h>>m;
angl = .5 * ((60*h) - (11*m));
if(angl<0){
    angl = angl*(-1);
}
 if(angl>180){
    angl = 360-angl;
}
printf("%f\n",angl);

return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int c =2;
    float b =0;
    while(c!=0){
        float a;
        cin>>a;

        if(a>=0 && a<=10){
            if(c==1){
                printf("media = %.2f\n",(a+b)/2);
            }else {
                b =a;
            }
            c--;
        }else {
            cout<<"nota invalida"<<endl;
        }
    }

}


int main()
{

    solve();
    return 0;
}



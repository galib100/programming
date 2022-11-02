
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
double a,b,c;
cin>>a>>b>>c;
    double big,mid,small;

    if(a>b && a>c){
        big = a;
            if(b>c){
                mid = b;
                small = c;
            }else{
                mid = c;
                small = b;
            }
    }else if (b>a && b>c){
            big = b;
            if(a>c){
                mid = a;
                small = c;
            }else{
                mid = c;
                small = a;
            }
    }
    else if (c>a && c>b){
            big = c;
            if(a>b){
                mid = a;
                small = b;
            }else{
                mid = b;
                small = a;
            }
    }
//    cout<<big<<" "<<mid<<" "<< small<<endl;

    if(big >= (mid+small)){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if ((big*big) == ((mid*mid) + (small*small))){
    cout<<"TRIANGULO RETANGULO"<<endl;

    }else if((big*big)<((mid*mid) + (small*small))){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if((big*big)>((mid*mid) + (small*small))){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
        }else if ((a==b))
}


int main()
{

    solve();
    return 0;
}


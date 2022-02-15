#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    ll n,c=0;
    cin>>n;
    if(n>=100)
    {
        c = n/100;
        if(n%100==0)
        {
            cout<< c <<endl;
           return;
        }
        else
        {
            n = n%100;
        }
        //n = 25
//        cout<<"n: "<<n<<endl;
//        cout<<"c: "<<c<<endl;
    }
   if (n>=20)
    {

        c = c + n/20; ///0+4

        if(n%20 ==0)
        {
            cout<< c <<endl;
            return;

        }
        else
        {
            n = n%20;///8
        }
// cout<<"n: "<<n<<endl;
//        cout<<"c: "<<c<<endl;
    }
     if(n>=10)
    {
        c = c + n/10;

        if(n%10 ==0)
        {
            cout<< c <<endl;
        return;
        }
        else
        {
            n = n%10;
        }
    }
     if (n>=5)
    {
        c = c + n/5; //4+1
        if(n%5 ==0)
        {
            cout<< c <<endl;
            return;

        }
        else
        {
            n = n%5;///3
        }

    }
    if (n<5){

    cout<<c +n<<endl;
    return;
    }



}


int main()
{
    solve();
    return 0;
}


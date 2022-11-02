#include<bits/stdc++.h>
using namespace std;
///Lamda function

int main()
{
    ///1
    function<int(int,int)> sum = [=](int a,int b)
    {
        return a+b;
    };

    cout<< sum(4 , 7)<<endl;

    ///system 2
    ///it can written "auto" instead of function<int(int,int)>
    auto sub =[](int a,int b){
        return a-b;
    };
    cout<<sub(8,3)<<endl;
}

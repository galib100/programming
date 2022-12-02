#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        float x,y;
        cin>>x>>y;
        if(y==0)
        {
            cout<<"divisao impossivel"<<endl;


        }
        else{
printf("%.1f\n",x/y);
        }


    }
return 0;
}

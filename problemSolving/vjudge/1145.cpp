#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
        int x,y;
        cin>>x>>y;
        int c=0;
        for(int i =1;i<=y;i++){

         if(c==x){
                cout<<endl;
                c=0;
            }
            if(i%x==0){
            cout<<i;
            c++;
            }else{
            cout<<i<<" ";
            c++;
            }



        }


}


int main()
{

    solve();
    return 0;
}



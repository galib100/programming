//https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
    ll y;
    cin>>y;
    for(int i =y+1;; i++)
    {

            int t1,t2,t3,t4;
            t4 = i%10;
            t3 = (i/10)%10;
            t2 = (i/100)%10;
            t1 = (i/1000);
            if(t4!=t3 && t4!=t2 && t4!=t1  && t2!=t3 && t1!=t3 && t1!=t2)
            {
                cout<< i<<endl;
                break;
            }



    }



}


int main()
{


    solve();
    return 0;
}


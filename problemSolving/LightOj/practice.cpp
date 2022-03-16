#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int

void solve(int c)
{
    int n;
    int ar[100][100] = { {1,4,5,16,17},
        {2,3,6,15,18},
        {9,8,7,14,19},
        {10,11,12,13,20},
        {25,24,23,22,21}
    };
    cin>>n;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(ar[i][j]==n)
            {
                cout<<"Case "<<c<<": "<<j+1<<" "<<i+1<<endl;

            }

        }
    }


}


int main()
{
    ll t;
    int c =1;
    cin>>t;
    while(t--)
    {
        solve(c);
        c++;
    }
    return 0;
}



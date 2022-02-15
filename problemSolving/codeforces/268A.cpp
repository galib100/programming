//https://codeforces.com/problemset/problem/268/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,ar[100][100];
    cin>>n;
    for(int i=0; i<n; i++)
    {

        cin>>ar[i][0]>>ar[i][1];

    }
    int c =0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        if(ar[i][0] == ar[j][1]){
            c++;
        }


        }


    }
    cout<<c <<endl;


}


int main()
{

    solve();
    return 0;
}


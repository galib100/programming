#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector <int>> vec;
    vec.resize(500);

    for(int i=0; i<5; i++)
    {
        for(int f=0; f<5; f++)
        {
        vec[i].push_back(f);

        }

    }

    for(int i=0; i<5; i++)
    {
        for(int f=0; f<5; f++)
        {
         cout<<vec[i][f]<<" ";
        }
        cout<<endl;

    }

}

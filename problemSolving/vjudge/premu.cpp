#include <bits/stdc++.h>
using namespace std;
#define ll  int

int main()
{

    vector<int>vec;
    ll n,a[1000];
    cin>> n;
    for(int i = 1; i<=n; i++)
    {

        vec.push_back(i);
    }
    do{
        for(int i =1; i<=n; i++)
        {

           cout<< vec[i];
        }
    }while(prev_permutation(vec.begin(),vec.end() ) );
    return 0;

}

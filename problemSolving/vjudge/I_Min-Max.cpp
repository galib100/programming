//https://vjudge.net/contest/479265#problem/I
#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<iterator>
#include<list>
using namespace std;
#define ll long long int

void solve()
{
    vector<int> vec1;
    int n,a,q,x,b,e;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        vec1.push_back(a);
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d %d",&x,&b,&e);
        if(x ==0)
        {
            //min
            printf("%d\n",*min_element(vec1.begin()+b,vec1.begin()+e));

        }
        else
        {
            //max
            printf("%d\n",*max_element(vec1.begin()+b,vec1.begin()+e));
        }




    }

}


int main()
{
    solve();
    return 0;
}




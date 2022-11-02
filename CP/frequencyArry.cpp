#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int str[30];
     for(int i =0;i<5;i++){
         cin>>str[i];
    }

    int sA[30]={0};
    for(int i =0;i<5;i++){
        sA[str[i]]++;
    }
     for(int i =0;i<6;i++){
        printf("%d ", sA[i]);
    }


}


int main()
{

    solve();
    return 0;
}


